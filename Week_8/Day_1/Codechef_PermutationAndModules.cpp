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
        cin >> n;
        cout << 2 << " ";
        for (int i = 3; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << 1 << '\n';
    }
}