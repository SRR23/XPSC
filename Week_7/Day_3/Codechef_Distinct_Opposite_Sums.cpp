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
        vector<int> v;
        for (int i = 1; i <= n; i += 2)
        {
            v.push_back(i);
            v.push_back(n - i + 1);
        }
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
}