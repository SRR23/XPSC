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
        int p = n;
        vector<pair<int, int>> ans;
        while (n--)
        {
            int m;
            cin >> m;
            vector<int> v(m);
            for (int i = 0; i < m; i++)
            {
                cin >> v[i];
            }
            sort(v.begin(), v.end());
            ans.push_back({v[1], -v[0]});
        }
        sort(ans.rbegin(), ans.rend());
        int mx = ans[0].first;
        int mn = INT_MAX;
        for (auto it : ans)
        {
            mn = min(mn, -it.second);
        }
        if (p == 1)
        {
            cout << mn << '\n';
            continue;
        }

        if (ans[0].first == mx && abs(ans[0].second) == mn)
        {
            int cnt = 0;
            for (auto it : ans)
            {
                if (it.first == mx && abs(it.second) == mn)
                {
                    cnt++;
                }
            }
            if (cnt == ans.size())
            {
                ll sum = mn;
                for (int i = 0; i < ans.size() - 1; i++)
                {
                    sum += ans[i].first;
                }
                cout << sum << '\n';
            }
            else
            {
                ll sum = cnt * mx;
                for (int i = cnt; i < ans.size() - 1; i++)
                {
                    sum += ans[i].first;
                }
                cout << sum + mn << '\n';
                // for(auto it:ans)
                // {
                //     cout<<it.first<<" "<<it.second<<'\n';
                // }
            }
        }
        else
        {
            ll sum = mn;
            for (int i = 0; i < ans.size() - 1; i++)
            {
                sum += ans[i].first;
            }
            cout << sum << '\n';
        }
    }
}