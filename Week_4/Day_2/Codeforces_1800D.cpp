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
        string s;
        cin >> s;
        int ans = n - 1;
        int x = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == s[i + 1])
            {
                x++;
            }
        }
        cout << ans - x << '\n';
    }
}