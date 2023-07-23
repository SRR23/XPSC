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
        int x, y;
        cin >> x >> y;
        map<int, int> mp;
        mp[3] = 3;
        mp[5] = 5;
        mp[7] = 7;
        mp[9] = 3;
        if (x % 2 == 0)
        {
            int cnt = 0;
            while (x < y)
            {
                cnt++;
                x += 2;
            }
            cout << cnt << '\n';
        }
        else
        {
            x += mp[x];
            int cnt = 1;
            while (x < y)
            {
                cnt++;
                x += 2;
            }
            cout << cnt << '\n';
        }
    }
}