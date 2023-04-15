#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll x=max(a,c);
    ll y=min(b,d);
    if(x<=y){
        cout<<x<<" "<<y<<endl;
    }
    else cout<<-1<<endl;


    return 0;
}
