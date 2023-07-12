#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        bool ok = false;
        for (int j = 0; j < 31; j++)
        {
            int x = (1 << j) - a[i];
            if (mp.count(x) && (mp[x] > 1 || (mp[x] == 1 && x != a[i])))
            {
                ok = true;
            }
        }
        if (!ok)
        {
            ans++;
        }
    }
    cout << ans << '\n';
}