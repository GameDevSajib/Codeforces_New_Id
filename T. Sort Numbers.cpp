//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll n=3;
   int a[n+5];
   int b[n+5];
   ll k=0;
   for(ll i=0;i<n;i++)
   {
       cin>>a[i];
       b[k]=a[i];
       k++;
   }
   sort(a,a+n);
   for(ll i=0;i<n;i++)
   {
       cout<<a[i]<<endl;
   }
   cout<<endl;
     for(ll i=0;i<n;i++)
   {
       cout<<b[i]<<endl;
   }





    return 0;
}

