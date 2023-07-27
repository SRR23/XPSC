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
        double sum = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            double p = i + 1;
            if (sum == 0)
            {
                continue;
            }
            double q = sum / p;
            if (q * 100 == 100)
            {
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}