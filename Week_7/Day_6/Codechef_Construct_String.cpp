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
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            while (i < s.size() - 2 && s[i] == s[i + 1] && s[i] == s[i + 2])
            {
                int j = i + 1;
                s.erase(j, 2);
            }
        }
        cout << s << '\n';
    }
}