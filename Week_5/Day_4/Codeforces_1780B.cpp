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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = accumulate(a.begin(), a.end(), 0ll);
        ll ans = 1,p=0;
        for (int i = 0; i < n - 1; i++)
        {
            p += a[i], sum -= a[i];
            ans = max(ans, __gcd(sum, p));
        }
        cout << ans << "\n";
    }
}