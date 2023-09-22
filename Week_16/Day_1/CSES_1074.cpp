#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int x = a[n / 2];
    int s1 = 0;
    for (int i = 0; i < n; i++)
        s1 += abs(a[i] - x);
    if (n % 2 == 0)
    {
        int s2 = 0;
        x = a[(n - 1) / 2];
        for (int i = 0; i < n; i++)
            s2 += abs(a[i] - x);
        s1 = min(s1, s2);
    }
    cout << s1 << '\n';
}