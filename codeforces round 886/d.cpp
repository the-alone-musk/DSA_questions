#include<bits/stdc++.h>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n, k;
        cin >> n >> k;

        vector<int> numbers(n);
        for (int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        sort(numbers.begin(), numbers.end());

        vector<int> differences;
        int start_index = 0;
        for (int i = 1; i < n; i++) {
            if (numbers[i] - numbers[i - 1] > k) {
                differences.push_back(i - start_index);
                start_index = i;
            }
        }

        differences.push_back(n - start_index);
        sort(differences.begin(), differences.end());

        int answer = accumulate(differences.begin(), differences.end(), 0) - differences[differences.size() - 1];
        cout << answer << endl;
    }
}
