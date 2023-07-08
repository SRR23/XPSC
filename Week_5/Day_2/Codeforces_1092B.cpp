#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i=i+2)
    {
        sum=sum+(a[i+1]-a[i]);
    }
    cout<<sum<<endl;
}