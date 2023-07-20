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
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << -1 << '\n';
        }
        else if (n <= 1000000)
        {
            cout << 1 << " " << 1 << " " << n - 1 << '\n';
        }
        else if (n % 1000000 == 0)
        {
            cout << (n / 1000000) - 1 << " " << 1000000 << " " << 1000000 << '\n';
        }
        else
        {
            cout << n / 1000000 << " " << 1000000 << " " << n % 1000000 << '\n';
        }
    }
}