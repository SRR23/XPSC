#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v;
        int n;
        cin >> n;
        int m = n * n;
        for (int i = 1; i <= (m / 2); i++)
        {
            v.push_back(i);
            v.push_back(m - i + 1);
        }
        if (n % 2 != 0)
        {
            v.push_back((m / 2) + 1);
        }
        int x = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = x; j < n + x; j++)
                {
                    cout << v[j] << " ";
                }
                cout << '\n';
                x += n;
            }
            else
            {
                for (int j = (n + x) - 1; j >= x; j--)
                {
                    cout << v[j] << " ";
                }
                cout << '\n';
                x += n;
            }
        }
    }
}