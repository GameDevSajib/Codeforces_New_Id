//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll n;
   cin>>n;
   ll x;
   while(n>0)
   {
       x=n%10;
       n=n/10;
   }
   if(x%2==0) cout<<"EVEN"<<endl;
   else cout<<"ODD"<<endl;




    return 0;
}
