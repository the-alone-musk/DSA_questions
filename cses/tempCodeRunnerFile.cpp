#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
int n ; 
while (t--){
    cin>> n ; 
    int arr[n] ; 
    int total_sum =  0, countodd = 0 , counteven = 0;
    for ( int i = 0 ;i < n ; i++){
        cin>>arr[i];
        total_sum += arr[i];
        if ( i%2 ==1){
           countodd += arr[i]; 
        }
        if (i%2 ==0){
         counteven += arr[i];   
        }
    }
    if ( countodd == counteven){cout<<"YES"<<endl;}
    // else {
    //     for ( int )
    // }
}
return 0 ; }