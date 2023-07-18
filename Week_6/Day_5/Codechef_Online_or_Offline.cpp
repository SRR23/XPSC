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
        double n, m;
        cin >> n >> m;
        double p = 0.1 * n;
        double q = n - p;
        if (q < m)
        {
            cout << "ONLINE\n";
        }
        else if (q == m)
        {
            cout << "EITHER\n";
        }
        else
        {
            cout << "DINING\n";
        }
    }
}