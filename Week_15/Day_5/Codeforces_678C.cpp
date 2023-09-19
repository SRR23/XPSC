#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll mx = max(p, q);
    ll lcm = (a * b) / __gcd(a, b);
    ll x = ((n / a) - (n / lcm)) * p;
    ll y = ((n / b) - (n / lcm)) * q;
    ll z = (n / lcm) * mx;
    cout << x + y + z << '\n';
}