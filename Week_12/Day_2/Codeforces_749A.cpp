#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (i = 1; i <= n / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        int m = n - 3;
        cout << (m / 2) + 1 << endl;
        for (i = 1; i <= m / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
        cout << endl;
    }
}