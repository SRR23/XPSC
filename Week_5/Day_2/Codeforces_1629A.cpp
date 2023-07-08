#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int a[n],b[n];
        pair<int,int> p[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            p[i].first=a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            p[i].second=b[i];
        }

        sort(p,p+n);
        for(i=0;i<n;i++)
        {
            if(k>=p[i].first)
            {
                k=k+p[i].second;
            }
        }
        cout<<k<<endl;
    }
}