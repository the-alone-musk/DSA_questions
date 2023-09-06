#include<bits/stdc++.h>
using namespace std; 


// void solve(int arrt, int destt)
// {

// }

int main (){
    int n;
    cout<<"Enter the number of processes: ";
    cin>>n;

    int burst_time[n], waiting_time[n], turn_around_time[n], response_time[n]; 
    int burst_sum=0, waiting_sum=0, turn_around_sum=0, response_sum=0;
    int Arrival_time[n], end_time[n];

    cout<<"Enter the arrival time of processes: "<<endl;
    for ( int i = 0 ; i < n ; i++){
        cin>>Arrival_time[i];
    }

    cout<<"Enter the burst time of processes: "<<endl;
    for ( int i = 0 ; i < n ; i++){
        cin>>burst_time[i];
        burst_sum+=burst_time[i];
    }
    
    end_time[0]=burst_time[0];

    for(int i=1;i<n;i++)
    {
        Arrival_time[i]=end_time[i-1];
        end_time[i]=Arrival_time[i]+burst_time[i];
    }

    for(int i=0;i<n;i++)
    {
        waiting_time[i]=Arrival_time[i]-0;
        turn_around_time[i]=end_time[i]-Arrival_time[i];
        response_time[i]=Arrival_time[i];
    }

    cout<<"Process\tStart Time\tBurst Time\tWaiting Time\tTurn-Around Time\tResponse Time"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"\t"<<Arrival_time[i]<<"\t\t"<<burst_time[i]<<"\t\t"<<waiting_time[i]<<"\t\t"<<turn_around_time[i]<<"\t\t"<<response_time[i]<<endl;
        waiting_sum+=waiting_time[i];
        turn_around_sum+=turn_around_time[i];
        response_sum+=response_time[i];
    }
    cout<<endl;
    cout<<"Average Waiting Time: "<<waiting_sum/n<<endl;
    cout<<"Average Turn-Around Time: "<<turn_around_sum/n<<endl;
    cout<<"Average Response Time: "<<response_sum/n<<endl;

    return 0;
    

    // main formula to walk around 
    // Turn-around time (TAT) = Completion time (CT) – Arrival time (AT) or, TAT = Burst time (BT) + Waiting time (WT)

    return 0 ;
}

