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
        int n;
        string x;
        cin >> n >> x;
        string a(n, '0'), b(n, '0');
        for (int i = 0; i < n; ++i)
        {
            if (x[i] == '1')
            {
                a[i] = '1';
                b[i] = '0';
                for (int j = i + 1; j < n; ++j)
                {
                    b[j] = x[j];
                }
                break;
            }
            else
            {
                a[i] = b[i] = '0' + (x[i] - '0') / 2;
            }
        }
        cout << a << '\n';
        cout << b << '\n';
    }

    return 0;
}