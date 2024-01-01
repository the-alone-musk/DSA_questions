#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
long long int ans =0 ; 
for (long long int i = 1 ; i < n+1 ; i++){
long long int total_ways = ((i*i)*((i*i)-1))/2; 
ans = total_ways - 4*(i-1)*(i-2);
cout<<ans<<endl; 
ans = 0 ; 
}
return 0;
}