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
        ll n;
        cin >> n;
        if (n <= 1e8)
        {
            vector<int> v;
            for (int i = 1; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    v.push_back(i);
                    int x = i;
                    if ((n / i) != i)
                    {
                        int y = n / i;
                        v.push_back(n / i);
                    }
                }
            }
            sort(v.begin(), v.end());
            // for (auto it : v)
            // {
            //     cout << it << " ";
            // }
            // cout << '\n';
            if (v.size() == 1)
            {
                cout << 1 << '\n';
                continue;
            }
            int cnt = 1, mx = 0;
            for (int i = 1; i < v.size(); i++)
            {
                if (v[i] - v[i - 1] == 1)
                {
                    cnt++;
                }
                else
                {
                    cnt = 1;
                }
                mx = max(mx, cnt);
            }
            cout << mx << '\n';
        }
        else
        {
            int cnt = 0, mx = 0;
            for (int i = 1; i <= 1e4; i++)
            {
                if (n % i == 0)
                {
                    cnt++;
                }
                else
                {
                    cnt = 0;
                }
                mx = max(mx, cnt);
            }
            cout << mx << '\n';
        }
    }
}