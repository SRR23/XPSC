#include <bits/stdc++.h>
using namespace std;
int a[300305];
int solve(int l, int r)
{
    if (r - l == 1)
        return 0;
    int mid = (l + r) >> 1;
    int mal = *max_element(a + l, a + mid);
    int mar = *max_element(a + mid, a + r);
    int ans = 0;
    if (mal > mar)
    {
        ++ans;
        for (int i = 0; i < (mid - l); ++i)
            swap(a[l + i], a[mid + i]);
    }
    return solve(l, mid) + solve(mid, r) + ans;
}

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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = solve(0, n);
        if (is_sorted(a, a + n))
        {
            cout << ans << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}