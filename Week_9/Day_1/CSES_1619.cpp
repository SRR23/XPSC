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
    map<int, ll> mp;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        mp[a]++;
        mp[b + 1]--;
    }
    ll sum = 0, mx = 0;
    for (auto it : mp)
    {
        sum += it.second;
        mx = max(mx, sum);
    }
    cout << mx << '\n';
}