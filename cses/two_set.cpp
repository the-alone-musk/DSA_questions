#include <bits/stdc++.h>
using namespace std;

int main(){
long long int n;
cin >> n;
vector <long long int> input(n);
if ( (n*(n+1) %4 )!= 0){ //is total sum /2 is long long integer or in digits
    cout<<"NO";
    return 0 ;
}
cout<<"YES"<<endl;

// ------------------------------------------------

long long int sum = n*(n+1)/4; 
vector<long long int>v1 , v2;
while(n){
if ( sum - n >=0 ){
    v1.push_back(n);
    sum -= n;
}
else{
    v2.push_back(n);
}
n-- ; 
}

// ------------------------------------------------
cout<<v1.size()<<endl;
for (long long int i = 0 ; i < v1.size() ; i++){
    cout<<v1[i]<<" ";
}
cout<<endl;
cout<<v2.size()<<endl;
for (long long int i = 0 ; i < v2.size() ; i++){
    cout<<v2[i]<<" ";
}
return 0;
}