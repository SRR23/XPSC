#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    string ans, tmp = "Yes";
    for (int i = 0; i < 120; i++)
    {
        ans.push_back(tmp[i % 3]);
    }
    while (t--)
    {
        string s;
        cin >> s;
        if (ans.find(s) != string::npos)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}