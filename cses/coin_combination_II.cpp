// Consider a money system consisting of n
//  coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ordered ways you can produce a money sum x
//  using the available coins.

// For example, if the coins are {2,3,5}
//  and the desired sum is 9
// , there are 3
//  ways:
// 2+2+5

// 3+3+3

// 2+2+2+3

// Input

// The first input line has two integers n
//  and x
// : the number of coins and the desired sum of money.

// The second line has n
//  distinct integers c1,c2,…,cn
// : the value of each coin.

// Output

// Print one integer: the number of ways modulo 109+7
// .

// Constraints
// 1≤n≤100

// 1≤x≤106

// 1≤ci≤106

// Example

// Input:
// 3 9
// 2 3 5

// Output:
// 3




#include <bits/stdc++.h>

using namespace std;

const int maxx = 1e6;
const int maxn = 100;
const long long MOD = 1e9 + 7;

vector<long long> dp(maxx + 1, 0);
int n, x ,c;

int main() {
    cin >> n >> x;


    dp[0] = 1;
    for(int i = 0; i < n; i++){
        cin>>c;
        for(int j = 0; j <= x-c; j++)
            dp[j+c] = (dp[j+c] + dp[j]) % MOD;
    }

    cout << dp[x] << endl;
    return 0;
}