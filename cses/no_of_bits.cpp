#include <iostream>

using namespace std;

int countSetBits(long long int n)
{
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int count(long long int n)
{
    int totalCount = 0;
    for (long long int i = 1; i <= n; i++) {
        totalCount += countSetBits(i);
    }
    return totalCount;
}

int main()
{
    long long int n;
    cin >> n;
    cout << count(n);
    return 0;
}
