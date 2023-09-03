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
        string s;
        cin >> s;

        char x = 'a', y = 'b';
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i + 1; j < s.size(); j++)
            {
                if (s[i] == '1' && s[j] == '3' || s[i] == '1' && s[j] == '7' || s[i] == '1' && s[j] == '9' ||
                    s[i] == '2' && s[j] == '3' || s[i] == '2' && s[j] == '9' || s[i] == '3' && s[j] == '7' ||
                    s[i] == '4' && s[j] == '3' || s[i] == '4' && s[j] == '7' || s[i] == '5' && s[j] == '3' ||
                    s[i] == '5' && s[j] == '9' || s[i] == '6' && s[j] == '7' || s[i] == '7' && s[j] == '3' ||
                    s[i] == '7' && s[j] == '9' || s[i] == '7' && s[j] == '1' || s[i] == '8' && s[j] == '3' ||
                    s[i] == '8' && s[j] == '9' || s[i] == '9' && s[j] == '7' || s[i] == '1' && s[j] == '1' ||
                    s[i] == '3' && s[j] == '1' || s[i] == '4' && s[j] == '1' || s[i] == '6' && s[j] == '1')
                {
                    x = s[i];
                    y = s[j];
                    break;
                }
            }
        }
        if (x == 'a' && y == 'b')
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << x << y << '\n';
        }
    }
}