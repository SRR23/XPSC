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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<pair<int, int>> v;
        int idx = -1;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] != a[0])
            {
                idx = i;
                v.push_back({1, i + 1});
            }
        }
        if (idx == -1)
        {
            cout << "NO" << '\n';
            continue;
        }
        for (int i = 1; i < n; ++i)
        {
            if (a[i] == a[0])
            {
                v.push_back({idx + 1, i + 1});
            }
        }
        cout << "YES" << '\n';
        for (auto it : v)
        {
            cout << it.first << " " << it.second << '\n';
        }
    }

    return 0;
}