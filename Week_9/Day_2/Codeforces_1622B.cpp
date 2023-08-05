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
        string s;
        vector<int> a(n), ans(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> s;
        map<int, int> mp, mp1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                mp[a[i]] = i;
            }
            else
            {
                mp1[a[i]] = i;
            }
        }
        int cnt = 1;
        for (auto it : mp)
        {
            ans[it.second] = cnt++;
        }
        for (auto it : mp1)
        {
            ans[it.second] = cnt++;
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
}