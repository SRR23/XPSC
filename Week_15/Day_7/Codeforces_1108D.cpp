#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0;
    vector<int> v;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (!st.empty() && st.top() == s[i])
        {
            x++;
            if (s[i] == 'R' && s[i + 1] == 'B')
            {
                st.push('G');
            }
            else if (s[i] == 'R' && s[i + 1] == 'G')
            {
                st.push('B');
            }
            else if (s[i] == 'B' && s[i + 1] == 'G')
            {
                st.push('R');
            }
            else if (s[i] == 'B' && s[i + 1] == 'R')
            {
                st.push('G');
            }
            else if (s[i] == 'G' && s[i + 1] == 'R')
            {
                st.push('B');
            }
            else if (s[i] == 'G' && s[i + 1] == 'B')
            {
                st.push('R');
            }
            else
            {
                if (s[i] == 'G')
                {
                    st.push('B');
                }
                else
                {
                    st.push('G');
                }
            }
        }
        else
        {
            st.push(s[i]);
        }
    }
    string ans;
    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << x << '\n';
    cout << ans << '\n';
}