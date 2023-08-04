#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution
{
public:
    int x, y, z;
} v[100005];

ll ar[100005], p[100005], d[100005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        p[i] = ar[i] - ar[i - 1];
    }

    for (int i = 1; i <= m; i++)
    {
        cin >> v[i].x >> v[i].y >> v[i].z;
    }
    for (int i = 1; i <= k; i++)
    {
        int a, b;
        cin >> a >> b;
        d[a]++;
        d[b + 1]--;
    }
    for (int i = 1; i <= m; i++)
    {
        d[i] += d[i - 1];
        p[v[i].x] += d[i] * v[i].z;
        p[v[i].y + 1] -= d[i] * v[i].z;
    }
    for (int i = 1; i <= n; i++)
    {
        p[i] += p[i - 1];
        cout << p[i] << " ";
    }
    cout << '\n';
}