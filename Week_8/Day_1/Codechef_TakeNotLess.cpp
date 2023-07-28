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
        int a[n];
        int mx = 0, cnt = 0;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
            mx = max(mx, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (mx == a[i])
            {
                cnt++;
            }
        }
        if (cnt & 1)
        {
            cout << "Marichka\n";
        }
        else
        {
            int f=1;
            for (auto it : mp)
            {
                if (it.second % 2 != 0)
                {
                    f=0;
                    break;
                }
            }
            if(f)
            {
                cout << "Zenyk\n";
            }
            else
            {
                cout << "Marichka\n";
            }
        }
    }
}