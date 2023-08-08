#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    int a[n];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        v.push_back({a[i], i + 1});
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    int sum = v[0].first, x = -1;
    if (sum <= k)
    {
        ans.push_back(v[0].second);
    }
    for (int i = 1; i < v.size(); i++)
    {
        sum += v[i].first;
        if (sum <= k)
        {
            ans.push_back(v[i].second);
        }
        else
        {
            break;
        }
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
}