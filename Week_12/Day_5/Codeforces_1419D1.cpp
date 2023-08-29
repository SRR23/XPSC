#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    cout << (n / 2) - (n  % 2 == 0) << '\n';
    int m = (n / 2) + (n % 2 != 0);
    for (int i = 0; i < m; i++)
    {
        if (a[i] == a[n - i - 1])
        {
            cout << a[i];
        }
        else
        {
            cout << a[i] << " " << a[n - i - 1] << " ";
        }
    }
    cout << '\n';
}