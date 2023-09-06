// IMPLEMENT SHOTTEST JOB FIRST SCHEDULLING IN CPP WITH ARRIVAL TIME

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;
    int bt[n];
    cout << "Enter the burst time of each process: ";
    for (int i = 0; i < n; i++)
    {
        cin >> bt[i];
    }
    int at[n];
    cout << "Enter the arrival time of each process: ";
    for (int i = 0; i < n; i++)
    {
        cin >> at[i];
    }
    cout << "The sequence of processes is: ";
    int wt[n], tat[n];
    wt[0] = 0;
    int rt[n];
    for (int i = 0; i < n; i++)
    {
        rt[i] = bt[i];
    }
    int time = 0;
    int done = 0;
    while (done != n)
    {

// Inside the loop, the code finds the index of the process with the shortest remaining time that has arrived (at[i] <= time) and hasn't finished executing (rt[i] > 0).
// If such a process is found (idx != -1), its remaining time is decremented, the time is incremented, and if the process is completed (rt[idx] == 0), the turnaround time and waiting time for that process are calculated.

        int idx = -1;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (at[i] <= time && rt[i] < mn && rt[i] > 0)
            {
                idx = i;
                mn = rt[i];
            }
        }
        if (idx != -1)
        {
            rt[idx]--;
            time++;
            if (rt[idx] == 0)
            {
                done++;
                tat[idx] = time - at[idx];
                wt[idx] = tat[idx] - bt[idx];
            }
        }
        else
        {
            time++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << " ";
    }
    cout << endl;
    cout << "The waiting times of each process is: ";
    for (int i = 0; i < n; i++)
    {
        cout << wt[i] << " ";
    }
    cout << endl;
    cout << "The turn around times of each process is: ";
    for (int i = 0; i < n; i++)
    {
        cout << tat[i] << " ";
    }
    cout<<endl;
    cout << "Average waiting time: " << accumulate(wt, wt + n, 0) / (float)n << endl;
    cout << "Average turnaround time: " << accumulate(tat, tat + n, 0) / (float)n << endl;
    return 0;
}
    

