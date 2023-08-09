#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool vis[N];
int cat[N];
int n, m, ans = 0;

void dfs(int node, int cnt_cat)
{
    int sum = 0;
    vis[node] = 1;
    if (cnt_cat > m)
    {
        return;
    }

    bool ok = false;
    for (int i = 0; i < g[node].size(); i++)
    {
        int ch = g[node][i];
        if (!vis[ch])
        {
            if (cat[ch])
            {
                sum = cnt_cat + 1;
            }
            else
            {
                sum = 0;
            }
            dfs(ch, sum);
            ok = true;
        }
    }
    if (!ok)
    {
        ans++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> cat[i];
    }
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, cat[1]);

    cout << ans << '\n';
}