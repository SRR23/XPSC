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
        string s1, s2;
        cin >> s1 >> s2;
        int a = s1.size(), b = s2.size();
        char x = s1[a - 1], y = s2[b - 1];
        if (a == b)
        {
            if (x == y)
            {
                cout << "=" << '\n';
            }
            else if (x < y)
            {
                cout << ">" << '\n';
            }
            else
            {
                cout << "<" << '\n';
            }
        }
        else if (a > b)
        {
            if (x == y)
            {
                if (x == 'S')
                {
                    cout << "<" << '\n';
                }
                else
                {
                    cout << ">" << '\n';
                }
            }
            else if (x < y)
            {
                cout << ">" << '\n';
            }
            else
            {
                cout << "<" << '\n';
            }
        }
        else
        {
            if (x == y)
            {
                if (x == 'S')
                {
                    cout << ">" << '\n';
                }
                else
                {
                    cout << "<" << '\n';
                }
            }
            else if (x < y)
            {
                cout << ">" << '\n';
            }
            else
            {
                cout << "<" << '\n';
            }
        }
    }
}