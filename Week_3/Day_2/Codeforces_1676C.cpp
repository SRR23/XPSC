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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mn = INT_MAX;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                string s1 = v[i];
                string s2 = v[j];
                int sum = 0;
                for (int i = 0; i < s1.size(); i++)
                {
                    sum += abs((s1[i] - 'a') - (s2[i] - 'a'));
                }
                mn = min(mn, sum);
            }
        }
        cout << mn << '\n';
    }
}