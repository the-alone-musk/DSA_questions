#include<bits/stdc++.h>

using namespace std;

int main (){
   long long int n ; 
    cin>>n ;
    vector<long long int> ans ; 

    while (n!= 1){
        ans.push_back(n) ;
        if ( n %2 == 0  ){
            n = n/2;
        }
        else{
            n = 3*n + 1 ;
        }
    }
    ans.push_back(n);
    for ( int i = 0 ; i< ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    return 0 ; 
}