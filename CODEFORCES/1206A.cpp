// problem with the code

#include<iostream>
using namespace std;

int main()
{

    long n;
    cin>>n;
    long sa(0);
    for (long p = 0; p < n; p++)
    {
        long a;
        cin>>a;
        sa = (sa > a) ? sa : a;
    }
    long m;
    cin>>m;
    long sb(0);
    for (long p = 0; p < m; p++)
    {
        long b;
        cin>>b;
        sb = (sb > b) ? sb : b;
    }
   cout<<sa<<sb;

    return 0;
}