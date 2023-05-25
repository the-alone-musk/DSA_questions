
#include <bits/stdc++.h>

using namespace std;

void count(int n)
{
   int count=0; 

   for ( int i = 1 ; i <= n ; i++){
    count += __builtin_popcount(i);
   }
   cout<<count;
}
int main()
{
    int n;
    cin >> n;
    count(n);
    return 0;
}