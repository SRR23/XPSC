#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005], mp[200005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }
    for (int i = 1; i <= n; i++)
    {
        mp[i] += mp[i - 1];
    }
    sort(a + 1, a + n + 1);
    sort(mp + 1, mp + n + 1);
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i] * mp[i];
    }
    cout << sum << '\n';
}