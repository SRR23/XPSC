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
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> v;
        ll ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
            {
                v.push_back((n - 1 - i) - i);
                ans += i;
            }
            else
            {
                v.push_back(i - (n - 1 - i));
                ans += n - 1 - i;
            }
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] > 0)
            {
                ans += v[i];
            }
            cout << ans << " ";
        }
        cout << '\n';
    }
}