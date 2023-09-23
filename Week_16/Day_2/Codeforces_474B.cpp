#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    v.push_back(0);
    for (int i = 0; i < n; i++)
    {
        v.push_back(v.back() + a[i]);
    }
    int k;
    cin >> k;
    while (k--)
    {
        int m;
        cin >> m;
        auto it = lower_bound(v.begin(), v.end(), m) - v.begin();
        cout << it << '\n';
    }
    return 0;
}