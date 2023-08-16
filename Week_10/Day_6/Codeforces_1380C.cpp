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
        ll n, x;
        cin >> n >> x;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll cnt = 0;
        ll k = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (k * a[i] >= x)
            {
                cnt++;
                k = 1;
            }
            else
            {
                k++;
            }
        }
        cout << cnt << '\n';
    }
}