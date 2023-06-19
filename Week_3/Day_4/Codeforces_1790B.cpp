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
        int n, s, r;
        cin >> n >> s >> r;
        int m = s - r;
        cout << m << " ";
        n--;
        vector<int> v(n, 1);
        r -= n;
        int j = 0;
        for (int i = 1; i <= r; i++)
        {
            if (v[j] != m)
            {
                v[j]++;
            }
            else
            {
                j++;
                v[j]++;
            }
        }
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << '\n';
    }
}