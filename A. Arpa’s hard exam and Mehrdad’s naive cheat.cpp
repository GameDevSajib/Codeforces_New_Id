///BISMILLAH
#include<bits/stdc++.h>
#define ll long long
#define mo 100000007
using namespace std;

ll POWER(ll base,ll n,ll mod)
{
    ll result=1;
    while(n)
    {
       if(n%2!=0)
       {
           result=(result*base)%mod;
           n--;
       }
       else{
            base=(base*base)%mod;
            n=n/2;
       }

    }
    return result;


}
int main()
{
    ll n=1378,m;
    cin>>m;
    ll x=POWER(n,m,1e9);
    //cout<<x<<endl;
    string s=to_string(x);
    //cout<<s<<endl;
    cout<<s[s.size()-1]<<endl;



    return 0;
}


