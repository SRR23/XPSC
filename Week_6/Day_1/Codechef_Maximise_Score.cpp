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
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int mx = 0;
            if (i + 1 < n)
            {
                mx = max(mx, abs(a[i] - a[i + 1]));
            }
            if (i - 1 >= 0)
            {
                mx = max(mx, abs(a[i] - a[i - 1]));
            }
            mn = min(mn, mx);
        }
        cout << mn << '\n';
    }
}