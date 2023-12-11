
#include<bits/stdc++.h>
using namespace std;

int countDivisors(int n) {
    int count = 0;
    int sqrtN = sqrt(n);
    for (int i = 1; i <= sqrtN; i++) {
        if (n % i == 0) {
            // If divisors are equal, count only one
            if (n / i == i)
                count++;
            else // Otherwise count both
                count = count + 2;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int>ans;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
       ans.push_back(countDivisors(x));
    }
    for ( int j = 0 ; j < ans.size() ; j++){
        cout<<ans[j]<<endl;
    }
    return 0;
}