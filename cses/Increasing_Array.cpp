#include<bits/stdc++.h>
using namespace std ; 

int main (){
    long long int n ;
    cin>>n;
    vector<long long int > ans(n);
    for ( int i = 0 ; i < n ; i++){
        cin>>ans[i];
    }

    long long int moves = 0;

    for (int j = 1; j<n; j++){
        if (ans[j] < ans[j-1]){
            moves += ans[j-1] - ans[j];
            ans[j] = ans[j-1]; //equating the nos so for next ref they can be used

        }
    }
    cout<<moves; 
    return 0 ;
    }