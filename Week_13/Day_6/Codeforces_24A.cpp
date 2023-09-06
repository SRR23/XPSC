#include <bits/stdc++.h>
using namespace std;

int mp[101][101];
int mark[101][101];
int vis[101];
int n, m = 0, f = 0, k = 0;

void dfs(int pos)
{
    k++;
    vis[pos] = 1;
    if (k == n)
    {
        m += mp[pos][1];
    }
    for (int i = 1; i <= n; i++)
    {
        if (mark[pos][i] == 1 && !vis[i])
        {
            m += mark[pos][i];
            if (k == n)
            {
                f == 1;
            }
            if (f == 1)
            {
                return;
            }
            dfs(i);
        }
    }
}

int main()
{
    int sum;
    while (cin >> n)
    {
        sum = 0;
        memset(mp, 0, sizeof(mp));
        memset(mark, 0, sizeof(mark));
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            mp[b][a] = c;
            mark[a][b] = 1;
            mark[b][a] = 1;
            sum += c;
        }
        dfs(1);
        if (m > sum - m)
        {
            m = sum - m;
        }
        cout << m << '\n';
    }
}