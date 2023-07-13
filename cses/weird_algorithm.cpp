
#include <bits/stdc++.h>

using namespace std;

void weirdAlgo(long long int n)
{
    cout << n << " ";
    while (n != 1)
    {
        // check this out
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        cout << n << " ";
    }
}
int main()
{

    long long int n;
    cin >> n;
    weirdAlgo(n);
    return 0;
}
