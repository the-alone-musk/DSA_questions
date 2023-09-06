#include <bits/stdc++.h>
using namespace std;

struct Process
{
    int id;
    int arrival_time;
    int burst_time;
};

int main()
{
    int num_processes;
    int time_quantum;

    cout << "Enter the number of processes: ";
    cin >> num_processes;

    cout << "Enter the time quantum: ";
    cin >> time_quantum;

    vector<Process> processes(num_processes);

    // Input process details
    for (int i = 0; i < num_processes; ++i)
    {
        processes[i].id = i + 1;
        cout << "Enter arrival time for process " << i + 1 << ": ";
        cin >> processes[i].arrival_time;
        cout << "Enter burst time for process " << i + 1 << ": ";
        cin >> processes[i].burst_time;
    }

    int current_time = 0;
    queue<Process> ready_queue;
    vector<int> remaining_time(num_processes);

    for (int i = 0; i < num_processes; ++i)
    {
        remaining_time[i] = processes[i].burst_time;
    }

    int completed_processes = 0;
    int total_turnaround_time = 0;
    int total_waiting_time = 0;

    while (completed_processes < num_processes)
    {
        for (int i = 0; i < num_processes; ++i)
        {
            if (processes[i].arrival_time <= current_time && remaining_time[i] > 0)
            {
                int execute_time = min(remaining_time[i], time_quantum);
                remaining_time[i] -= execute_time;
                current_time += execute_time;

                if (remaining_time[i] == 0)
                {
                    completed_processes++;
                    int turnaround_time = current_time - processes[i].arrival_time;
                    int waiting_time = turnaround_time - processes[i].burst_time;

                    total_turnaround_time += turnaround_time;
                    total_waiting_time += waiting_time;

                    cout << "Process " << processes[i].id << " completed. Turnaround time: " << turnaround_time << ", Waiting time: " << waiting_time << endl;
                }
            }
        }
    }

    double average_turnaround_time = static_cast<double>(total_turnaround_time) / num_processes;
    double average_waiting_time = static_cast<double>(total_waiting_time) / num_processes;

    cout << "Average Turnaround Time: " << average_turnaround_time << endl;
    cout << "Average Waiting Time: " << average_waiting_time << endl;

    return 0;
}
