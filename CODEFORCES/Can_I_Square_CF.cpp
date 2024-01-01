#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ;
    cin>>t;
int n ; 
while (t--){
    cin>> n ; 

    long long int arr[n] ;long long int count = 0 ;
    for (long long int i = 0 ; i < n ; i++){
        cin>>arr[i] ; 
        count +=arr[i];
    }
    if (ceil((double)sqrt(count)) == floor((double)sqrt(count))) {
        cout << "YES"<<endl;
    }
    else {
        cout << "NO"<<endl;
    }
}
return 0 ; }