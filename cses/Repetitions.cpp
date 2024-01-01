#include<bits/stdc++.h>
using namespace std ; 

int main (){
    vector<long long int > ans;
    long long int count = 1;
    long long int tcount = 1;
    string a; 
    cin>>a; 
    long long n = a.length();
    for ( int i = 0 ; i < n ; i++){
        ans.push_back(a[i]); 
    }
    
    // sort(ans.begin(),ans.end());
    for ( int i = 1 ; i < n ; i++){
        if(ans[i] == ans[i-1]){tcount++;}
        else{tcount = 1;}

        if(tcount > count){count = tcount;}
    }
cout<<count; 
}