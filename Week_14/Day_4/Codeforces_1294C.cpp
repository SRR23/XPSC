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
        set<ll> s;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0 && !s.count(i))
            {
                s.insert(i);
                n /= i;
                break;
            }
        }
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0 && !s.count(i))
            {
                s.insert(i);
                n /= i;
                break;
            }
        }
        if (s.size() < 2 || s.count(n) || n == 1)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            s.insert(n);
            for (auto it : s)
            {
                cout << it << " ";
            }
            cout << '\n';
        }
    }
}