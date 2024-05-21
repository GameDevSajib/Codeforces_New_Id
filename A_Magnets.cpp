#include<bits/stdc++.h>
#define ll long long
#define do {
#define done }
#define start_ int main()
#define finish return 0;

using namespace std;

start_
do
    string x="";
    string y="";
    ll n;cin>>n;
    ll cnt=0;
    for(ll i=0;i<n;i++)
    {
        cin>>y;
        if(x!=y)
        {
            cnt++;
            x=y;

        }


    }
    cout<<cnt<<endl;




    finish
done
