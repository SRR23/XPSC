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
        int a[n];
        map<int, int> mp;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            if (mp[a[i]] == 1)
            {
                v.push_back(a[i]);
            }
        }
        sort(v.rbegin(), v.rend());
        cout << v[0] + v[1] << '\n';
    }
}