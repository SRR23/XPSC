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
        int a[n + 1];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        if (n == 1 || n == 2 || n == 3)
        {
            cout << n << '\n';
        }
        else
        {
            if (mp.size() > 2)
            {
                cout << n << '\n';
            }
            else
            {
                cout << n - ((n / 2) - 1) << '\n';
            }
        }
    }
}