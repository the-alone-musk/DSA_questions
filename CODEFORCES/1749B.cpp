
#include <bits/stdc++.h> 
using namespace std;

using i64 = long long;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    auto ans = (a.begin(), a.end(), 0LL) + (b.begin(), b.end(), 0LL);
    ans -= *max_element(b.begin(), b.end());
    
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
