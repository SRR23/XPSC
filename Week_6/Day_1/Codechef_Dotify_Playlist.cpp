#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> v;
        while (n--)
        {
            int p, q;
            cin >> p >> q;
            if (q == l)
            {
                v.push_back(p);
            }
        }
        sort(v.rbegin(), v.rend());
        if (v.size() < k)
        {
            cout << -1 << '\n';
        }
        else
        {
            int sum = 0;
            for (int i = 0; i < k; i++)
            {
                sum += v[i];
            }
            cout << sum << '\n';
        }
    }
}