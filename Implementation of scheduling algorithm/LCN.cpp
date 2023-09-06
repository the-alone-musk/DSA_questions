// IMPLEMENT LCN ALGORITHM IN 

#include <bits/stdc++.h>
using namespace std;
struct Process
{
    int id;
    int arrival_time;
    int burst_time;
    int start_time;
    int completion_time;
    int waiting_time;
    int turnaround_time;
};

int main()
{
    int num_processes;
    cout << "Enter the number of processes: ";
    cin >> num_processes;

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

    // Simulate scheduling (FIFO in this example)
    int current_time = 0;
    queue<Process> ready_queue;

    for (int i = 0; i < num_processes; ++i)
    {
        while (!ready_queue.empty() && ready_queue.front().arrival_time <= current_time)
        {
            Process front_process = ready_queue.front();
            ready_queue.pop();
            front_process.start_time = current_time;
            front_process.completion_time = current_time + front_process.burst_time;
            front_process.turnaround_time = front_process.completion_time - front_process.arrival_time;
            front_process.waiting_time = front_process.turnaround_time - front_process.burst_time;

            current_time = front_process.completion_time;

            // Print details of the executed process
            cout << "Process " << front_process.id << " completed. Turnaround time: " << front_process.turnaround_time << ", Waiting time: " << front_process.waiting_time << endl;
        }

        if (i < num_processes)
        {
            ready_queue.push(processes[i]);
        }
    }

    // Calculate averages
    double total_turnaround_time = 0;
    double total_waiting_time = 0;

    for (const Process &p : processes)
    {
        total_turnaround_time += p.turnaround_time;
        total_waiting_time += p.waiting_time;
    }

    double average_turnaround_time = total_turnaround_time / num_processes;
    double average_waiting_time = total_waiting_time / num_processes;

    cout << "Average Turnaround Time: " << average_turnaround_time << endl;
    cout << "Average Waiting Time: " << average_waiting_time << endl;

    return 0;
}
