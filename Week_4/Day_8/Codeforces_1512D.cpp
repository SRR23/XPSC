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
        int n;
        cin >> n;
        int a[n + 2];
        for (int i = 0; i < n + 2; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n + 2);
        int m = n + 2;
        int x = a[m - 2];
        int y = a[m - 1];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        if (sum == x || sum == y)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << '\n';
        }
        else
        {
            sum += x;
            int ans = -1;
            for (int i = 0; i < n; i++)
            {
                if (sum - a[i] == y)
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
                for (int i = 0; i < n; i++)
                {
                    if (i == ans)
                    {
                        continue;
                    }
                    cout << a[i] << " ";
                }
                cout << x << '\n';
            }
        }
    }
}