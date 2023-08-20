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
        vector<int> v;
        v.push_back(1);
        map<int, int> mp;
        for (int i = 2; i <= (n / 2); i++)
        {
            int x = i;
            if (!mp.count(x))
            {
                v.push_back(x);
                mp[x]++;
            }
            while (2 * x <= n)
            {
                x *= 2;
                if (!mp.count(x))
                {
                    v.push_back(x);
                    mp[x]++;
                }
            }
        }
        for (int i = (n / 2) + 1; i <= n; i++)
        {
            if (!mp.count(i))
            {
                v.push_back(i);
                mp[i]++;
            }
        }
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
}