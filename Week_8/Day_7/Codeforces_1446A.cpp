#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int l = 0; l < t; l++)
    {
        long long int W = 0, n = 0;
        cin >> n >> W;
        long long int b[n], c[n], m = 0, sum = 0, j = 0, flag = 0;
        for (int k = 0; k < n; k++)
            cin >> b[k];
        for (int i = n - 1; i >= 0; i--)
        {
            if (((b[i] > W / 2 && W % 2 != 0) || (W % 2 == 0 && b[i] >= W / 2)) && b[i] <= W)
            {
                cout << 1 << endl
                     << i + 1 << endl;
                flag = 1;
                break;
            }
            else if ((b[i] <= W / 2 && W % 2 != 0) || (W % 2 == 0 && b[i] < W / 2))
            {
                sum += b[i];
                c[j] = i + 1;
                j++;
                if ((sum > W / 2 && W % 2 != 0) || (W % 2 == 0 && sum >= W / 2))
                {
                    flag = 2;
                    break;
                }
            }
        }
        if (flag == 2)
        {
            sort(c, c + j);
            cout << j << endl;
            for (int p = 0; p < j; p++)
                cout << c[p] << " ";
            cout << endl;
        }
        else if (flag == 0)
            cout << -1 << endl;
    }
}