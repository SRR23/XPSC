#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool bit(int mask, int pos)
{
    return (mask >> pos) & 1;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> n;
        vector<int> v;
        v.push_back(n);
        int p = 0;
        for (int i = 0;; ++i)
        {
            if (bit(n, i))
            {
                if (n == (1 << i))
                {
                    p = i;
                    break;
                }
                n -= (1 << i);
                v.push_back(n);
            }
        }
        while (p > 0)
        {
            n -= (1 << (p - 1));
            v.push_back(n);
            --p;
        }
        cout << v.size() << '\n';
        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
}