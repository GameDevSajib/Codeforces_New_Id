#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    ll x=floor(a/b);
    ll y=ceil(a/b);
    ll r=round(a/b);

    cout<<"floor "<<a<<" / "<<b<<" = "<<x<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<y<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<r<<endl;




    return 0;
}

