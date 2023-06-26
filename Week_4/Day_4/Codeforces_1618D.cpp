#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,sum=0;
        cin>>n>>k;
        ll a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1,greater<ll> ());
        for(i=1;i<=k;i++)
        {
            sum=sum+(a[k+i]/a[i]);
        }
        for(i=(2*k)+1;i<=n;i++)
        {
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}