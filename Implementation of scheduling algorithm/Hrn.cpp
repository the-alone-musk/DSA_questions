// Hrn 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter no of processess:";
    cin >> n;

    vector<pair<double, double>> v(n);
    double ans = 0;
    double ans1 = 0;

    cout << "enter arrival and burst time" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "process " << i + 1 << ":";
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());
    vector<bool> vis(n, false);
    vector<double> pre(n);
    int min = INT_MAX;
    pre[0] = v[0].second;
    vis[0] = true;
    int in;
    ans += pre[0] - v[0].first;
    ans1 += (pre[0] - v[0].first) / v[0].second;
    double maxi = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        maxi = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            if (vis[j] == false && v[j].first <= pre[i - 1] && ((pre[i - 1] - v[j].first + v[j].second) / v[j].second) > maxi)
            {
                maxi = ((pre[i - 1] - v[j].first + v[j].second) / v[j].second);
                in = j;
            }
        }
        vis[in] = true;
        pre[i] = pre[i - 1] + v[in].second;
        ans1 += (pre[i] - v[in].first) / v[in].second;

        ans += pre[i] - v[in].first;
    }

    cout << "Average turn around time:" << double(ans / n) << endl;
    cout << "Average waited turn around:" << double(ans1 / n) << endl;

    return 0;
}
