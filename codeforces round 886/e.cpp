#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<long long>& vec, long long c, long long mid) {
    long long sum = 0;
    for (int i = 0; i < vec.size(); i++) {
        sum += (vec[i] + mid) * (vec[i] + mid);
        if (sum < 0 || sum > c) // Check for overflow or if sum exceeds c
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, c;
        cin >> n >> c;
        vector<long long> vec(n);

        for (long long i = 0; i < n; i++) {
            cin >> vec[i];
        }

        long long low = 0;
        long long high = 1e9;
        long long ans = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            if (isPossible(vec, c, mid)) {
                ans = mid / 2;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
