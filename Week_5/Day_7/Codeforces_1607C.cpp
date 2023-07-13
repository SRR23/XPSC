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
        vector<int> a(n);
        vector<int> frq(n + 1, 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        n = unique(a.begin(), a.end()) - a.begin();
        a.resize(n);
        for (auto it : a)
        {
            frq[it]++;
        }
        frq[a[0]]--;
        frq[a[n - 1]]--;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mn = min(mn, frq[a[i]]);
        }
        cout << mn << '\n';
    }
}