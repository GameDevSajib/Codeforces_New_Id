#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n=3;
    int a[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll mx=-100000,mn=100000007;
    for(ll i=0;i<n;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
        }
        if(a[i]<mn)
        {
            mn=a[i];
        }
    }
    cout<<mn<<" "<<mx<<endl;



    return 0;
}
