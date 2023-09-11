#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 10;
vector<bool> prime(N, 1);
map<ll, ll> mp;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 3; i * i < N; i += 2)
    {
        if (prime[i] == true)
        {
            for (int j = i * i; j < N; j += 2 * i)
            {
                prime[j] = false;
            }
        }
    }
    mp[2]++;
    for (int i = 3; i < N; i += 2)
    {
        if (prime[i] == true)
        {
            mp[i]++;
        }
    }

    ll n;
    cin >> n;
    while (n--)
    {
        ll m;
        cin >> m;
        ll p = sqrtl(m);
        if ((p * p) == m && mp.count(p))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}