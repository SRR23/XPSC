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
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if (n % 2 != 0 || zero == n)
        {
            cout << -1 << '\n';
        }
        else if (one == n && n == 2)
        {
            cout << -1 << '\n';
        }
        else if (one == zero)
        {
            cout << 0 << '\n';
        }
        else if (one == n)
        {
            if ((n / 2) % 2 != 0)
            {
                cout << (((n / 2) / 2) + 1) + 1 << '\n';
            }
            else
            {
                cout << (n / 2) / 2 << '\n';
            }
        }
        else
        {
            if (one > zero)
            {
                int p = (one - zero);
                if (p % 2 == 0)
                {
                    if ((p / 2) % 2 == 0)
                    {
                        cout << (p / 2) / 2 << '\n';
                    }
                    else
                    {
                        cout << (((p / 2) / 2) + 1) + 1 << '\n';
                    }
                }
                else
                {
                    cout << (p / 2) / 2 << '\n';
                }
            }
            else
            {
                cout << (zero - one) / 2 << '\n';
            }
        }
    }
}