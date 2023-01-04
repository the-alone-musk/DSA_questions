#include<bits/stdc++.h>

using namespace std;
#define ll long long
void solve(){
    int n,m,i,j;
    cin>>n;
    map<int,int> cnt;
    for(i=0;i<n;i++){
        cin>>m;
        cnt[m]++;
    }
    if(cnt.size()==1){
        cout<<(ll)n*(n-1)<<endl;
    }
    else{
        cout<<(ll) cnt.begin()->second *cnt.rbegin()->second*2<<endl;
    }
    return;
}
int main(){
    ll testcases;
    cin>>testcases;
    vector<ll>ans;
    while(testcases--)
    {
     solve();   
    }
    return 0;
}