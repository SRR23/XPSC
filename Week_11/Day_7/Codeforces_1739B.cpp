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
        int a[n + 3];
        ll sum = 0;
        vector<ll> v1, v2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        v1.push_back(a[0]);
        v2.push_back(a[0]);
        for (int i = 1; i < n; i++)
        {
            int x = v1.size() - 1;
            v1.push_back(v1[x] + a[i]);
            if (v2[x] >= a[i])
            {
                v2.push_back(v2[x] - a[i]);
            }
            else
            {
                v2.push_back(v2[x] + a[i]);
            }
        }
        if (v1 != v2)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << v1[i] << " ";
            }
            cout << '\n';
        }
    }
}