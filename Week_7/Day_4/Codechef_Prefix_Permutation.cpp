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
        if (n & 1)
        {
            cout << -1 << '\n';
        }
        else
        {
            vector<int> v;
            for (int i = n; i >= 1; i -=2)
            {
                v.push_back(i-1);
                v.push_back(i);
            }
            for (auto it : v)
            {
                cout << it << " ";
            }
            cout << '\n';
        }
    }
}