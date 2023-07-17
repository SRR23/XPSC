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
        int n, m;
        cin >> n >> m;
        int p = (n / 2) + (n % 2 != 0);
        if (m >= p)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}