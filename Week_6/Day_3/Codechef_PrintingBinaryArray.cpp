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
        int f = 1;
        for (int i = 0; i < n / 2; i++)
        {
            if (a[i] != a[n - i - 1])
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            for (int i = 0; i < n; i++)
            {
                int x = a[i] ^ 1;
                cout << x << " ";
            }
            cout << '\n';
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << a[i] << " ";
            }
            cout << '\n';
        }
    }
}