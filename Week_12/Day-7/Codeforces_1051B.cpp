#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll l, r;
    cin >> l >> r;
    cout << "YES\n";
    for (int i = 0; i < (r - l) / 2 + 1;i++)
    {
        cout << l + i * 2 << " " << l + i * 2 + 1 << '\n';
    }
}