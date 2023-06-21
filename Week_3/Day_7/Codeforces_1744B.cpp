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
        ll n, q, sum = 0;
        cin >> n >> q;
        int odd = 0, even = 0, x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
            {
                odd++;
            }
            else
            {
                even++;
            }
            sum += x;
        }
        ll k, p;
        while (q--)
        {
            cin >> k >> p;
            if (k == 0)
            {
                sum += p * odd;
                if (p % 2 == 1)
                {
                    even += odd;
                    odd = 0;
                }
            }
            else
            {
                sum += p * even;
                if (p % 2 == 1)
                {
                    odd += even;
                    even = 0;
                }
            }
            cout << sum << '\n';
        }
    }
}