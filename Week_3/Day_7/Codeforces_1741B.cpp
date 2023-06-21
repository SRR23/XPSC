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
        if (n == 3)
        {
            cout << -1 << '\n';
        }
        else if (n == 5)
        {
            cout << 5 << " " << 4 << " " << 1 << " " << 2 << " " << 3 << '\n';
        }
        else
        {
            if (n % 2 == 0)
            {
                for (int i = n; i >= 1; i--)
                {
                    cout << i << " ";
                }
                cout << '\n';
            }
            else
            {
                for (int i = n; i >= (n - (n / 2) + 1); i--)
                {
                    cout << i << " ";
                }
                cout << (n / 2) << " " << (n / 2) + 1 << " ";
                for (int i = (n / 2) - 1; i >= 1; i--)
                {
                    cout << i << " ";
                }

                cout << '\n';
            }
        }
    }
}