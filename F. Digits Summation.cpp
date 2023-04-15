#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{

    ll  n,m,x,y;
    cin>>n>>m;
    vector<ll>arr;
    vector<ll>brr;
    ll k=0,p=0;
    while(n>0&&m>0)
    {
        x=n%10;
        n/=10;
        arr.pb(x);
        y=m%10;
        m=m/10;
        brr.pb(y);
    }
    cout<<(arr[0]+brr[0])<<endl;




    return 0;
}
