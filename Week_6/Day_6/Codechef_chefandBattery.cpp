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
        int n, m;
        cin >> n;
        int cnt = 0;
        while (1)
        {
            if (n == 50)
            {
                break;
            }
            cnt++;
            if (n > 50)
            {
                n -= 3;
            }
            else
            {
                n += 2;
            }
        }
        cout << cnt << '\n';
    }
}