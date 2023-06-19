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
        int a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;
        int mn = min({a, b, c, d});
        int mx = max({a, b, c, d});
        if ((a == mn && d == mx) || (a == mx && d == mn) || (b == mn && c == mx) || b == mx && c == mn)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}