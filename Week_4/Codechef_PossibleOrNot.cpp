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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] & k) == k)
            {
                v.push_back(a[i]);
            }
        }

        if (v.size() == 0)
        {
            cout << "NO\n";
        }
        else if (v.size() == 1)
        {
            if (v[0] == k)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            ll ans = v[0];
            for (int i = 1; i < v.size(); i++)
            {
                ans &= v[i];
            }
            if (ans != k)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
}