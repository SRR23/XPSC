#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int> mp;
        int n, i, f = 0;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if ((*it).second == 1)
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<int> v;
            for (i = 0; i < n; i++)
            {
                v.push_back(i + 1);
            }
            int L = 0, R = 0;
            while (R < n)
            {
                while (R < n - 1 && a[R] == a[R + 1])
                {
                    R++;
                }
                rotate(v.begin() + L, v.begin() + R, v.begin() + R + 1);
                L = R + 1;
                R++;
            }
            for (i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
