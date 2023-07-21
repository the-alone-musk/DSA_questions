#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
  
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> freq(n + 1, 0);
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            int pos = a[i];
            while (pos <= n && freq[pos] == 0) {
                freq[pos]++;
                ans++;
                pos += a[i];
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
