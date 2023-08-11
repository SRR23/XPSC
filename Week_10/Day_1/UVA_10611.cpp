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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        auto it1 = lower_bound(v.begin(), v.end(), m) - v.begin();
        auto it2 = upper_bound(v.begin(), v.end(), m) - v.begin();
        int ans = -1;
        if (it1 == it2 && it1 < n)
        {
            cout << v[it1 - 1] << " " << v[it2] << '\n';
        }
        else if (it1 == it2 && it1 == n)
        {
            cout << v[it1 - 1] << " X\n";
        }
        else if (it1 == 0 && it2 == n)
        {
            cout << "X X\n";
        }
        else if (it1 != 0 && it2 == n)
        {
            cout << v[it1 - 1] << " X\n";
        }
        else if (it1 == 0 && it2 != n)
        {
            cout << "X " << v[it2] << '\n';
        }
        else
        {
            cout << v[it1 - 1] << " " << v[it2] << '\n';
        }
    }
}