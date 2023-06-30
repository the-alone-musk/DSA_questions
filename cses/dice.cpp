// Your task is to count the number of ways to construct sum n
//  by throwing a dice one or more times. Each throw produces an outcome between 1 and 6


// For example, if n=3
// , there are 4
//  ways:
// 1+1+1

// 1+2

// 2+1

// 3

// Input

// The only input line has an integer n
// .

// Output

// Print the number of ways modulo 109+7
// .

// Constraints
// 1≤n≤106

// Example

// Input:
// 3

// Output:
// 4





#include <bits/stdc++.h>

using namespace std;
const int maxN = 1e6;
const int MOD = 1e9+7;

int N, dp[maxN+1];

int main(){
    cin>>N;

    dp[0] = 1;
    for(int i = 1; i <= N; i++)
        for(int j = 1; j <= 6 && i-j >= 0; j++)
            dp[i] = (dp[i] + dp[i-j]) % MOD;

    cout<<dp[N];
    return 0 ;}
