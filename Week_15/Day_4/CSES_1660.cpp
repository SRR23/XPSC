#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_map<int, int> mp;
    int s = 0;
    mp[0] = 1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i];
        if (mp.find(s - x) != mp.end())
            ans += mp[s - x];
        mp[s]++;
    }
    cout << ans << '\n';
}