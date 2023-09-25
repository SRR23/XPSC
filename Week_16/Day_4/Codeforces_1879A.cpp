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
        int p;
        cin >> p;
        vector<pair<int, int>> v;
        while (p--)
        {
            int n, m;
            cin >> n >> m;
            v.push_back({n, m});
        }
        int x = v[0].first;
        int y = v[0].second;

        int f = 1;
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i].first >= x && v[i].second >= y)
            {
                f = 0;
                break;
            }
        }
        if (f == 1)
        {
            cout << x << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}