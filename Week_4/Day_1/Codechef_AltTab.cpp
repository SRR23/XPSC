#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    unordered_map<string, ll> mp, mp1;
    deque<string> dq;
    while (n--)
    {
        string s;
        cin >> s;
        mp[s]++;
        if (mp[s] == 1)
        {
            dq.push_front(s);
        }
        else
        {
            dq.push_front(s);
        }
    }
    vector<string> v;
    for (auto it : dq)
    {
        // cout << it << '\n';
        v.push_back(it);
    }
    for (int i = 0; i < v.size(); i++)
    {
        string s = v[i];
        mp1[s]++;
        if (mp1[s] == 1)
        {
            cout << s[s.size() - 2] << s[s.size() - 1];
        }
    }
    cout << '\n';
}