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
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = 0;
                int x = i, y = j;
                while (x >= 0 && x < n && y >= 0 && y < m)
                {
                    sum += a[x][y];
                    x--;
                    y--;
                }
                x = i, y = j;
                while (x >= 0 && x < n && y >= 0 && y < m)
                {
                    sum += a[x][y];
                    x++;
                    y--;
                }
                x = i, y = j;
                while (x >= 0 && x < n && y >= 0 && y < m)
                {
                    sum += a[x][y];
                    x--;
                    y++;
                }
                x = i, y = j;
                while (x >= 0 && x < n && y >= 0 && y < m)
                {
                    sum += a[x][y];
                    x++;
                    y++;
                }
                sum -= a[i][j] * 3;
                mx = max(mx, sum);
            }
        }
        cout << mx << '\n';
    }
    return 0;
}