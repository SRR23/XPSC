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
        int n = (10 * (s[0] - '0')) + s[1] - '0';
        int m = (10 * (s[3] - '0')) + s[4] - '0';
        if (m > 12)
        {
            cout << "MM/DD/YYYY\n";
        }
        else if (n > 12)
        {
            cout << "DD/MM/YYYY\n";
        }
        else
        {
            cout << "BOTH\n";
        }
    }
}