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
        int m = n % 10;
        if (m >= 5)
        {
            int p = 10 - m;
            cout << 100 - (n + p) << '\n';
        }
        else
        {
            cout << 100 - (n - m) << '\n';
        }
    }
}