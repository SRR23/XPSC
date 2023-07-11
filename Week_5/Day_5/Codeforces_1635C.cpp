#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, i;
        cin >> n;
        ll a[n + 1];
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        if (is_sorted(a + 1, a + n + 1))
        {
            cout << 0 << endl;
        }
        else
        {
            if (a[n] < a[n - 1] || (a[n] < 0 && a[n - 1] < 0))
            {
                cout << -1 << endl;
            }
            else
            {
                cout << n - 2 << endl;
                for (i = 1; i <= n - 2; i++)
                {
                    cout << i << " " << n - 1 << " " << n << endl;
                }
            }
        }
    }
    return 0;
}