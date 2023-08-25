#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<ll> v;
    ll n, k, i;
    cin >> n >> k;
    for (i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);

            if (i != sqrt(n))
            {
                v.push_back(n / i);
            }
        }
    }

    sort(v.begin(), v.end());

    if (v.size() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << v[k - 1] << endl;
    }
}