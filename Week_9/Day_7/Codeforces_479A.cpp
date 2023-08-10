#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;
    int x = (a + b) * c;
    int y = a + (b * c);
    int z = a * b * c;
    int p = a * (b + c);
    int q = a + b + c;
    cout << max({x, y, z, p, q}) << '\n';
}