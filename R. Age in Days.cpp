#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll year,months,days;
    //cin>>year>>months>>days;
    year=n/365;
    ll x=(n%365);
    months=(x/30);
    ll y=(x%30);
    cout<<year<<" "<<"years"<<endl;
    cout<<months<<" "<<"months"<<endl;
    cout<<y<<" "<<"days"<<endl;


    return 0;
}
