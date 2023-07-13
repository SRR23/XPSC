#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> v1, v2;
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll p = a[0];
        for (ll i = 0; i < n; i++)
        {
            v1.push_back(a[i]);
        }
        if (n == 1)
        {
            cout << a[0] << endl;
        }
        else if (n == 2)
        {
            cout << max(a[0], a[1] - a[0]) << endl;
        }
        else if (a[0] == a[n - 1] && a[0] > 0)
        {
            cout << a[0] << endl;
        }
        else
        {
            ll i = 0, sum = 0, k = n;
            while (k--)
            {
                while (i < v1.size() && v1[i] - sum == 0)
                    i++;

                if (i < v1.size() && v1[i] - sum != 0)
                {
                    v2.push_back(v1[i] - sum);
                    sum = v1[i];
                }
                else
                {
                    v2.push_back(0);
                }
            }
            cout << *max_element(v2.begin(), v2.end()) << endl;
        }
    }
}