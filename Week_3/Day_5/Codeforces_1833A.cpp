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
        map<string, int> mp;
        for (int i = 0; i < n - 1; i++)
        {
            char x = s[i];
            char y = s[i + 1];
            string tmp;
            tmp.push_back(x);
            tmp.push_back(y);
            mp[tmp]++;
        }
        cout << mp.size() << '\n';
    }
}