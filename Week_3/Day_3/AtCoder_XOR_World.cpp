#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll solve(ll n)
{
    if (n % 4 == 0)
    {
        return n;
    }
    else if (n % 4 == 1)
    {
        return 1;
    }
    else if (n % 4 == 2)
    {
        return n + 1;
    }
    else if (n % 4 == 3)
    {
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b;
    cin >> a >> b;
    ll ans = solve(a - 1) ^ solve(b);
    cout << ans << '\n';
}