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
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a' && s[i] < 'z')
            {
                s[i] = s[i] - 32;
            }
        }
        if (s == "YES")
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}