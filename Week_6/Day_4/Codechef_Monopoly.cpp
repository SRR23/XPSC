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
        int a[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 4);
        if ((a[0] + a[1] + a[2]) < a[3])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}