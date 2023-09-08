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
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
        {
            cout << 0 << '\n';
        }
        else
        {
            int p = abs(a - b);
            if (p % 2 != 0)
            {
                p /= 2;
                cout << (p / c) + 1 << '\n';
            }
            else
            {
                p /= 2;
                if (p < c)
                {
                    cout << 1 << '\n';
                }
                else
                {
                    cout << (p / c) + (p % c != 0) << '\n';
                }
            }
        }
    }
}