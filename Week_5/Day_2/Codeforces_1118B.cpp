#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    int ePref = 0, oPref = 0, eSuf = 0, oSuf = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (i & 1)
            eSuf += a[i];
        else
            oSuf += a[i];
    }

    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i & 1)
            eSuf -= a[i];
        else
            oSuf -= a[i];
        if (ePref + oSuf == oPref + eSuf)
        {
            ++ans;
        }
        if (i & 1)
            ePref += a[i];
        else
            oPref += a[i];
    }

    cout << ans << endl;

    return 0;
}