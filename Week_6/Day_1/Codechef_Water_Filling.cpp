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
        vector<int> a(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (a[0] == a[1] && a[0] == 0)
        {
            cout << "Water filling time\n";
        }
        else
        {
            cout << "Not now\n";
        }
    }
}