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
        if (n == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        if (n & 1)
        {
            cout << -1 << '\n';
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                cout << i << " ";
            }
            else
            {
                cout << n - i << " ";
            }
        }
        cout << '\n';
    }
}