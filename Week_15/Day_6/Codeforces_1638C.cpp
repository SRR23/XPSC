#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n + 1];
        ll mx = 0, cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            cnt += (mx == i);
        }
        cout << cnt << '\n';
    }
}