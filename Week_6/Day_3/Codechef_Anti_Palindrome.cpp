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
        cin >> s;
        map<char, int> mp;
        vector<int> v;
        for (auto it : s)
        {
            mp[it]++;
        }
        for (auto it : mp)
        {
            v.push_back(it.second);
        }
        int x = 0, y = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 2 == 0)
            {
                x++;
            }
            if (v[i] % 2 != 0)
            {
                y++;
            }
        }
        if ((x == v.size()) || (x > 0 && y == 1))
        {
            cout << 1 << '\n';
        }
        else if (y > 1)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << 2 << '\n';
        }
    }
}