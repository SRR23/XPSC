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
        char ch;
        string s;
        cin >> n >> ch >> s;
        s += s;
        int cnt = 0, mx = 0, f = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ch)
            {
                f = 1;
            }
            if (s[i] == 'g')
            {
                f = 0;
                mx = max(mx, cnt);
                cnt = 0;
            }
            if (f == 1)
            {
                cnt++;
            }
        }
        cout << mx << '\n';
    }
}