#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        map<pair<int, char>, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[{a[i], s[i]}]++;
        }

        vector<int> v;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            int p = (*it).first.first;
            v.push_back(p);
        }
        int f = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] == v[i + 1])
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
}