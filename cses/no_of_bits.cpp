
#include <bits/stdc++.h>

using namespace std;

// void count(long long int n)
// {
//   long long int count=0; 

//    for ( long long int i = 1 ; i <= n ; i++){
//     count += __builtin_popcount(i);
//    }
//    cout<<count;
// }
// int main()
// {
//     long long int n;
//     cin >> n;
//     count(n);
//     return 0;
// }

int countSetBits(long long int n)
{
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

void count(long long int n)
{
    long long int count = 0;

    for (long long int i = 1; i <= n; i++) {
        count += countSetBits(i);
    }
    cout << count;
}

int main()
{
    long long int n;
    cin >> n;
    count(n);
    return 0;
}
