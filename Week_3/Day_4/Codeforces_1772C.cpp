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
        int k, n;
        cin >> k >> n;
        int m = n - k;
        int sum = 0;
        int i = 1, j = 1;
        while (i <= k)
        {
            cout << j << " ";
            sum += i;
            if (sum <= m)
            {
                j += i;
            }
            i++;
            j++;
        }
        cout << '\n';
    }
}