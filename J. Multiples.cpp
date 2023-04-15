#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
   ll a,b;
   cin>>a>>b;
   if((a%b==0)||(b%a==0))
   {
       cout<<"Multiples"<<endl;
   }
   else{
       cout<<"No Multiples"<<endl;
   }



    return 0;
}
