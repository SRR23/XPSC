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
        int a, b, c;
        cin >> a >> b;
        if (a == b && a % 2 != 0)
        {
            int ans = -1;
            for (int i = 2; i * i <= a; i++)
            {
                if (a % i == 0)
                {
                    ans = i;
                    break;
                }
            }
            if (ans == -1)
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << ans << " " << a - ans << '\n';
            }

            continue;
        }
        if (a == 2)
        {
            if (b - a >= 2)
            {
                cout << 2 << " " << 2 << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
            continue;
        }
        if (a == 1)
        {
            if (b - a >= 3)
            {
                cout << 2 << " " << 2 << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
            continue;
        }
        if (a % 2 == 0)
        {
            cout << a / 2 << " " << a / 2 << '\n';
            continue;
        }
        if (b % 2 == 0)
        {
            cout << b / 2 << " " << b / 2 << '\n';
            continue;
        }
        cout << (a + 1) / 2 << " " << (a + 1) / 2 << '\n';
    }
}