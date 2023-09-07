#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, k;
        cin >> a >> b;
        ll x = b / (a - 1);

        if (x * (a - 1) != b)
        {
            x++;
        }

        ll y = a * x;
        ll z = (a - 1) * x;
        ll p = (z - b) + 1;
        cout << y - p << endl;
    }
    return 0;
}