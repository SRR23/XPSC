#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,f=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(abs(a[i]-a[i+1])==1)
            {
                f=1;
            }
        }
        if(f==1)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    return 0;
}