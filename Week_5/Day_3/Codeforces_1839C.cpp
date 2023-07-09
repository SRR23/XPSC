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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[n - 1] == 1)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        vector<int> ans;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 0)
            {
                if (i == 0 || a[i - 1] == 0)
                {
                    ans.push_back(0);
                }
                else if (a[i - 1] == 1)
                {
                    int cnt = 0, tmp;
                    int j = i - 1;
                    int nxt;
                    while (j >= 0 && a[j] == 1)
                    {
                        cnt++;
                        nxt = j;
                        j--;
                    }
                    tmp = cnt;
                    while (cnt--)
                    {
                        ans.push_back(0);
                    }
                    ans.push_back(tmp);
                }
            }
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
}