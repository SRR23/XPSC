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
        int p;
        cin >> p;
        int q = p;
        int a[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
            p ^= a[i];
        }
        int m = p;
        vector<int> v;
        v.push_back(p ^ q);
        for (int i = 0; i < n - 1; i++)
        {
            v.push_back(p ^ a[i]);
        }
        int x = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            x ^= v[i];
        }
        if (x == 0)
        {
            cout << m << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}