// TO IMPLEMENT FCFS SCHEDULING IN CPP WITHOUT ARRIVAL TIME

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
    cout << "The sequence of processes is: ";
    int wt[n], tat[n];
    wt[0] = 0;

    for (int i = 1; i < n; i++)
    {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];
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
    cout << "The turnaround times of each process is: ";
    for (int i = 0; i < n; i++)
    {
        cout << tat[i] << " ";
    }
    cout << endl;
    cout << "Average waiting time: " << accumulate(wt, wt + n, 0) / (float)n << endl;
    cout << "Average turnaround time: " << accumulate(tat, tat + n, 0) / (float)n << endl;
    return 0;
}
