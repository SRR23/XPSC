#include <bits/stdc++.h>
using namespace std;
const int N = 2000;
int a[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans ^= a[i];
        }
        if (ans == 0)
        {
            cout << "YES\n";
        }
        else
        {
            int cnt = 0, tmp = 0;
            for (int i = 0; i < n; i++)
            {
                if ((tmp ^= a[i]) == ans)
                {
                    tmp = 0;
                    cnt++;
                }
            }
            if (tmp == 0 && cnt > 1)
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