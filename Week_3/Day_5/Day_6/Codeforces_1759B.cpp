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
        int n, s;
        cin >> n >> s;
        int a[n];
        vector<int> v, v1;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v1.push_back(a[i]);
            mp[a[i]]++;
        }
        for (int i = 1; i <= 100; i++)
        {
            if (!mp[i])
            {
                v.push_back(i);
            }
        }
        int sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
            v1.push_back(v[i]);
            if (sum >= s)
            {
                break;
            }
        }
        sort(v1.begin(), v1.end());
 
        if (sum == s)
        {
            int f = 0;
            for (int i = 0; i < v1.size(); i++)
            {
                if (v1[i] != (i + 1))
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
        else
        {
            cout << "NO" << '\n';
        }
    }
}