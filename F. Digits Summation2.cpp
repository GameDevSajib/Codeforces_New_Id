#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     string s1,s2;
     int a[100005];
     int b[100005];
     cin>>s1>>s2;
     for(ll i=0;i<s1.size();i++)
     {
         a[i]=s1[i]-48;
         //b[i]=s2[i]-48;
     }
       for(ll i=0;i<s2.size();i++)
     {
         //a[i]=s1[i]-48;
         b[i]=s2[i]-48;
     }
     cout<<(a[1]+b[1])<<endl;
    return 0;
}

