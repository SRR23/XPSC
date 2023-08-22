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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << a + min(b, c) * 2 + min(a + 1, abs(b - c) + d) << '\n';
        }
    }
}