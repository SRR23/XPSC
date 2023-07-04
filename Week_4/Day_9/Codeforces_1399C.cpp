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
        sort(a, a + n);
        int mx = 0;
        for (int i = 2; i <= (2 * n) + 1; i++)
        {
            int j = 0;
            int k = n - 1;
            int cnt = 0;
            while (j < k)
            {
                if (a[j] + a[k] == i)
                {
                    cnt++;
                    j++;
                    k--;
                }
                else if (a[j] + a[k] < i)
                {
                    j++;
                }
                else if (a[j] + a[k] > i)
                {
                    k--;
                }
            }
            mx = max(mx, cnt);
        }
        cout << mx << '\n';
    }
}