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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            v.push_back(b[i] - a[i]);
        }
        sort(v.rbegin(), v.rend());
        int l = 0, r = n - 1;
        int cnt = 0;
        while (l < r)
        {
            if (v[l] + v[r] >= 0)
            {
                cnt++;
                l++;
                r--;
            }
            else if (v[l] + v[r] < 0)
            {
                r--;
            }
        }
        cout << cnt << '\n';
    }
}