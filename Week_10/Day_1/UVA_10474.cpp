#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    int cnt = 1;
    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
        {
            break;
        }
        cout << "CASE# " << cnt++ << ":\n";
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        while (q--)
        {
            int m;
            cin >> m;
            auto it = lower_bound(a.begin(), a.end(), m);
            int idx = it - a.begin();
            if (idx == n || a[idx] != m)
            {
                cout << m << " not found\n";
            }
            else
            {
                cout << m << " found at " << idx + 1 << '\n';
            }
        }
    }
}