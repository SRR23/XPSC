#include <bits/stdc++.h>
using namespace std;
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
        int a[n];
        map<int, int> mp;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            s.insert(a[i]);
            s.insert(a[i] + 1);
        }
        int x = 0, ans = 0;
        for (auto it : s)
        {
            ans += max(0, mp[it] - x);
            x = mp[it];
        }
        cout << ans << '\n';
    }
}