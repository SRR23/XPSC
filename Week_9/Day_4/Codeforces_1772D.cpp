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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mn = 0, mx = int(1e9);
        for (int j = 0; j + 1 < n; j++)
        {
            int x = a[j];
            int y = a[j + 1];
            int midL = (x + y) / 2;
            int midR = (x + y + 1) / 2;
            if (x < y)
                mx = min(mx, midL);
            if (x > y)
                mn = max(mn, midR);
        }
        if (mn <= mx)
            cout << mn << endl;
        else
            cout << -1 << endl;
    }
}