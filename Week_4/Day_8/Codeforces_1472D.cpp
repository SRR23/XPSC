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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (a[i] % 2 == 0)
                {
                    sum += a[i];
                }
            }
            else
            {
                if (a[i] % 2 != 0)
                {
                    sum -= a[i];
                }
            }
        }
        if (sum == 0)
        {
            cout << "Tie\n";
        }
        else if (sum > 0)
        {
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
        }
    }
}