#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<ll> v;
    for (int i = 0; i < 31; i++)
    {
        v.push_back((1 << i));
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = n;
        if (n & (n - 1))
        {
            auto it = lower_bound(v.begin(), v.end(), m) - v.begin();
            cout << v[it - 1] - 1 << '\n';
        }
        else
        {
            cout << n - 1 << '\n';
        }
    }
}