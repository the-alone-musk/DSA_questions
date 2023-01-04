#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
const int N = 1e4 + 10;
int a[N];
int a1;
int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a1;
    while (a1--) {

        int b;
        cin >> b;
        char new_1;
        cin >> new_1;
        int new_3 = 0;
        for (int i = 0; i < b - 1; i++) {

            char new_2;
            cin >> new_2;
            if (new_2 == '1') {
                if (new_3 == 0) {

                    cout << '-';
                    new_3 = -1;
                }
                else {

                    cout << '+';
                    new_3 = 0;
                }

            }
            else cout << '+';

        }
        cout << endl;

    }

    return 0;
}
