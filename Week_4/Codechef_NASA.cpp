#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n)
{
    string str = to_string(n);
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
            return false;
    }
    return true;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> palindrome;
    for (int i = 0; i <= 32768; i++)
    {
        if (isPalindrome(i))
        {
            palindrome.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
        }
        long long ans = n;
        for (auto i : v)
        {
            for (auto j : palindrome)
            {
                ans += mp[i ^ j];
            }
        }
        cout << ans / 2 << '\n';
    }
}