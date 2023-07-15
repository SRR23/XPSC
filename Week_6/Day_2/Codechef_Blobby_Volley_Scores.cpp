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
        int a, b = 0;
        if (s[0] == 'A')
        {
            a++;
        }
        else
        {
            a = 0;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A' && s[i + 1] == 'A')
            {
                a++;
            }
            else if (s[i] == 'B' && s[i + 1] == 'B')
            {
                b++;
            }
        }
        cout << a << " " << b << '\n';
    }
}