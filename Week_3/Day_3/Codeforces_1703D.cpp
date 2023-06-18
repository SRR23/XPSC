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
        string s[n];
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            mp[s[i]] = 1;
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            bool ok = false;
            for (int j = 0; j < s[i].size(); j++)
            {
                string a = s[i].substr(0, j);
                string b = s[i].substr(j, s[i].size() - j);
                if (mp[a] && mp[b])
                {
                    ok = true;
                }
            }
            v.push_back(ok);
        }
        for (auto it : v)
        {
            cout << it;
        }
        cout << '\n';
    }
}