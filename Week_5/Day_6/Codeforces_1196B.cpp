#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n], od = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                od++;
            }
        }
        if ((k > od) || (od % 2 == 0 && k % 2 != 0) || (od % 2 != 0 && k % 2 == 0))
        {
            cout << "NO\n";
        }
        else
        {
            set<ll> st;
            cout << "YES\n";
            int m = k - 1;
            for (int i = n - 1; i >= 0, k > 0; i--)
            {
                if (a[i] % 2 != 0)
                {
                    st.insert(i + 1);
                    k--;
                }
            }
            auto it1 = --st.end();
            st.erase(it1);
            for (auto it : st)
            {
                cout << it << " ";
            }
            cout << n << '\n';
        }
    }
}