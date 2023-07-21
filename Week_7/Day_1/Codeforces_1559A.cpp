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
        int a[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
            p &= a[i];
        }
        cout << p << '\n';
    }
}