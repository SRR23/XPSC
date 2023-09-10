#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (q--)
    {
        int x;
        cin >> x;
        int p = find(a.begin(), a.end(), x) - a.begin();
        cout << p + 1 << " ";
        rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
    }

    cout << '\n';
}