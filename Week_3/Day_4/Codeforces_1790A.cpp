#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    string ans = "3141592653589793238462643383279";
    while (t--)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ans[i])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << '\n';
    }
}