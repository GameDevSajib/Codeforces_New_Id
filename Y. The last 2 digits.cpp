//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    ll mul=a*b*c*d;
    ll result=mul%100;
    if(result<10)
    {
        cout<<0<<result<<endl;
    }
    else cout<<result<<endl;

    return 0;
}

