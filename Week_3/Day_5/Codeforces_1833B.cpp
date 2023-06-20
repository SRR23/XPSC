#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        sort(v1.begin(), v1.end());
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            v2[v[i].second] = v1[i];
        }
        for (auto it : v2)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
}