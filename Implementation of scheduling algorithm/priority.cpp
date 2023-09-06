#include <bits/stdc++.h>

using namespace std;

struct Process
{
    int id;
    int priority;
    int burst_time;
    int waiting_time;
    int turnaround_time;
    Process(int i, int p, int bt) : id(i), priority(p), burst_time(bt), waiting_time(0), turnaround_time(0) {}
    bool operator<(const Process &other) const
    {
        return priority > other.priority;
    }
};

int main()
{
    int n = 5;
    int arrival_time[] = {1, 2, 3, 4, 5};
    int burst_time[] = {3, 5, 1, 7, 4};
    int priority[] = {3, 4, 1, 7, 8};

    priority_queue<Process> pq;

    for (int i = 0; i < n; i++)
    {
        pq.push(Process(i + 1, priority[i], burst_time[i]));
    }
    int total_waiting_time = 0;
    int total_turnaround_time = 0;
    while (!pq.empty())
    {
        Process current = pq.top();
        pq.pop();

        current.waiting_time += current.burst_time; // Update waiting time for the current process

        current.turnaround_time = current.waiting_time + current.burst_time;

        total_waiting_time += current.waiting_time;
        total_turnaround_time += current.turnaround_time;
        cout << "Process ID: " << current.id << " Priority: " << current.priority
             << " Waiting Time: " << current.waiting_time
             << " Turnaround Time: " << current.turnaround_time << endl;

        // Update waiting time for the next processes
        while (!pq.empty())
        {
            pq.top().waiting_time += current.burst_time;
            break;
        }
    }

    float avg_waiting_time = static_cast<float>(total_waiting_time) / n;
    float avg_turnaround_time = static_cast<float>(total_turnaround_time) / n;
    cout << "Average Waiting Time: " << avg_waiting_time << endl;
    cout << "Average Turnaround Time: " << avg_turnaround_time << endl;

    return 0;
}
