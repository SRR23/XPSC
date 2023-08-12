#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll p = 1, ans = 0;
        for (int i = 0; i < 31; i++)
        {
            if (k & (1 << i))
            {
                ans = (ans + p) % mod;
            }
            p *= n;
            p %= mod;
        }
        cout << ans << '\n';
    }
}