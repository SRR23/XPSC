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
        int n;
        cin >> n;
        ll cnt = 0;
        map<string, int> mp;
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 2; j++)
            {
                for (char ch = 'a'; ch <= 'k'; ch++)
                {
                    if (ch == s[j])
                    {
                        continue;
                    }
                    string ans = s;
                    ans[j] = ch;
                    cnt += mp[ans];
                }
            }
            mp[s]++;
        }
        cout << cnt << '\n';
    }
}