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
        vector<int> v;
        set<char> st;
        map<char, int> mpA, mpa;
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                mpa[s[i]]++;
            }
            else
            {
                mpA[s[i]]++;
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            st.insert(tolower(s[i]));
        }
        int ans = 0;
        for (auto it : st)
        {
            int x = -1, y = -1;
            if (mpa.count(it))
            {
                x = mpa[it];
            }
            if (mpA.count(toupper(it)))
            {
                y = mpA[toupper(it)];
            }
            if (x != -1 && y == -1)
            {
                v.push_back(x / 2);
                // ans += x / 2;
            }
            else if (x == -1 && y != -1)
            {
                v.push_back(y / 2);
                // ans += y / 2;
            }
            else
            {
                if (x == y)
                {
                    ans += (x + y) / 2;
                }
                else if (x > y)
                {
                    ans += y;
                    int p = x - y;
                    // ans += (p / 2);
                    v.push_back(p / 2);
                }
                else
                {
                    ans += x;
                    int p = y - x;
                    // ans += (p / 2);
                    v.push_back(p / 2);
                }
            }
        }
        sort(v.rbegin(), v.rend());
        // cout << v[0] << '\n';
        if (k == 0)
        {
            cout << ans << '\n';
        }
        else
        {
            int sum = 0, m = k;
            for (int i = 0; i < v.size(); i++)
            {
                int x = v[i];
                while (x > 0 && m > 0)
                {
                    x--;
                    sum++;
                    m--;
                }
            }
            cout << ans + sum << '\n';
        }
    }

    return 0;
}