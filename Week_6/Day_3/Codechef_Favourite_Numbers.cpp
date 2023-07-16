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
        if ((n % 2 == 0) && (n % 7 == 0))
        {
            cout << "Alice\n";
        }
        else if ((n % 2 != 0) && (n % 9 == 0))
        {
            cout << "Bob\n";
        }
        else
        {
            cout << "Charlie\n";
        }
    }
}