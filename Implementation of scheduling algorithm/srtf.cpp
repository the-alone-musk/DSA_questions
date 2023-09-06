#include <bits/stdc++.h>
using namespace std;

struct Process {
    int pid; // Process ID
    int burstTime; // Burst Time
    int arrivalTime; // Arrival Time
};

void calculateWaitingTime(Process proc[], int n, int waitingTime[]) {
    int remainingTime[n];

    for (int i = 0; i < n; i++) {
        remainingTime[i] = proc[i].burstTime;
    }

    int completed = 0, currentTime = 0;
    
    // Process until all processes are completed
    while (completed != n) {
        int shortestProcess = -1, minRemainingTime = INT_MAX;

        // Find the process with the minimum remaining time among those that have arrived by the current time
        for (int j = 0; j < n; j++) {
            if (proc[j].arrivalTime <= currentTime && remainingTime[j] < minRemainingTime && remainingTime[j] > 0) {
                minRemainingTime = remainingTime[j];
                shortestProcess = j;
            }
        }

        if (shortestProcess == -1) {
            currentTime++;
            continue;
        }

        remainingTime[shortestProcess]--;

        // If a process is completed
        if (remainingTime[shortestProcess] == 0) {
            completed++;

            // Calculate waiting time
            waitingTime[shortestProcess] = currentTime + 1 - proc[shortestProcess].burstTime - proc[shortestProcess].arrivalTime;

            if (waitingTime[shortestProcess] < 0) {
                waitingTime[shortestProcess] = 0;
            }
        }

        // Increment time
        currentTime++;
    }
}

void calculateTurnaroundTime(Process proc[], int n, int waitingTime[], int turnaroundTime[]) {
    for (int i = 0; i < n; i++) {
        turnaroundTime[i] = proc[i].burstTime + waitingTime[i];
    }
}

void calculateAndDisplayAverageTimes(Process proc[], int n) {
    int waitingTime[n], turnaroundTime[n];
    int totalWaitingTime = 0, totalTurnaroundTime = 0;

    calculateWaitingTime(proc, n, waitingTime);
    calculateTurnaroundTime(proc, n, waitingTime, turnaroundTime);

    for (int i = 0; i < n; i++) {
        totalWaitingTime += waitingTime[i];
        totalTurnaroundTime += turnaroundTime[i];
    }

    cout << "Process\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++) {
        cout << proc[i].pid << "\t" << proc[i].burstTime << "\t\t" << proc[i].arrivalTime << "\t\t"
             << waitingTime[i] << "\t\t" << turnaroundTime[i] << endl;
    }

    cout << "\nAverage waiting time = " << (float)totalWaitingTime / (float)n;
    cout << "\nAverage turnaround time = " << (float)totalTurnaroundTime / (float)n;
}

int main() {
    Process proc[] = { { 1, 6, 2 }, { 2, 2, 5 },
                    { 3, 8, 1 }, { 4, 3, 0}, {5, 4, 4} };
    int n = sizeof(proc) / sizeof(proc[0]);

    calculateAndDisplayAverageTimes(proc, n);
    return 0;
}
