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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        ll ans = a[0];
        ll l = 0, r = n - 1;
        ll cnt = 1;
        while (l < r)
        {
            if ((ans) >= a[r])
            {
                ans = (ans ^ a[r]);
                r--;
            }
            else
            {
                cnt++;
                ans = a[l];
                l++;
            }
        }
        cout << cnt << '\n';
    }
}