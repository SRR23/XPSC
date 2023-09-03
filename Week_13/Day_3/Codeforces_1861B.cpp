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
        cin >> s1;
        cin >> s2;
        int n = s1.size();
        int m = s2.size();
        if (s1 == s2)
        {
            cout << "YES\n";
        }
        else if (s1[1] == '1' && s2[1] == '1')
        {
            cout << "YES\n";
        }
        else if (s1[n - 2] == '0' && s2[n - 2] == '0')
        {
            cout << "YES\n";
        }
        else
        {
            int f = 0;
            for (int i = 1; i < n - 1; i++)
            {
                if (s1[i] == '0' && s2[i] == '0' && s1[i + 1] == '1' && s2[i + 1] == '1')
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
}