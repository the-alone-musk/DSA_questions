#include<bits/stdc++.h>

using namespace std ; 

int main (){
    long long int n ;
    cin>>n;
    long long int sum1 = 0 , sum2= 0;
    vector<long long int>ans(n); 
    for (int i =0 ;i<n-1;i++){
        cin>>ans[i];
        sum1+=ans[i];
    }
    for ( int j =1 ;j<=n ;j++){
        sum2+=j;
    }
    cout<<abs(sum2-sum1); 
    return 0 ;
}