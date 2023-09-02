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
        vector<ll> a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        sum -= a[n - 1];
        sum++;
        ll ans = a[n - 1] - sum;
        if (a[n - 1] == 0)
        {
            cout << 0 << '\n';
        }
        else if (ans >= 0)
        {
            cout << 2 << '\n';
        }
        else
        {
            cout << 1 << '\n';
        }
    }
}