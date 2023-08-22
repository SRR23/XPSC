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
        string s;
        cin >> s;
        map<int, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        if (mp.size() == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        int x = 0, y = 0;
        set<char> st1, st2, st3;
        for (int i = 0; i < s.size(); i += 2)
        {
            st1.insert(s[i]);
        }
        for (int i = 1; i < s.size(); i += 2)
        {
            st2.insert(s[i]);
        }
        if (st1.size() == 1 || st2.size() == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        for (int i = 1; i < s.size() - 1; i++)
        {
            st3.insert(s[i]);
        }
        if ((s[0] == s[s.size() - 1] || s[0] != s[s.size() - 1]) && st3.size() == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        int cnt = 0, n = s.size();
        while (n > 1)
        {
            cnt++;
            n /= 2;
        }
        cout << cnt << '\n';
    }
}