#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    int x = s1.size(), y = s2.size();
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    int cnt = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
        {
            cnt++;
        }
        else
        {
            break;
        }
    }

    cout << (x + y) - (2 * cnt) << '\n';
}