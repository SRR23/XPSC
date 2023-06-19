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
        vector<vector<int>> v;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            vector<int> tmp;
            for (int j = 0; j < n - 1; j++)
            {
                int x;
                cin >> x;
                tmp.push_back(x);
            }
            v.push_back(tmp);
        }
        for (int i = 0; i < n; i++)
        {
            mp[v[i][0]]++;
        }
        int mx = -1;
        int p = 0;
        for (auto it : mp)
        {
            if (it.second > mx)
            {
                mx = it.second;
                p = it.first;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i][0] != p)
            {
                cout << p << " ";
                for (int j = 0; j < n - 1; j++)
                {
                    cout << v[i][j] << " ";
                }
            }
        }
        cout << '\n';
    }
}