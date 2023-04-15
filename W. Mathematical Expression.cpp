//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c;
    char ch1,ch2;
    cin>>a>>ch1>>b>>ch2>>c;
    //if(((a+b)==c)&&(ch1=='+')) cout<<"YES"<<endl;
    //else if(((a-b)==c)&&(ch1=='-')) cout<<"YES"<<endl;
    //else if(((a*b)==c)&&(ch1=='*')) cout<<"YES"<<endl;
    if(((a+b)!=c)&&(ch1=='+')) cout<<(a+b)<<endl;
        //else if(((a+b)!=c)&&(ch1=='+')) cout<<(a+b)<<endl;

    else if(((a-b)!=c)&&(ch1=='-')) cout<<(a-b)<<endl;
    else if(((a*b)!=c)&&(ch1=='*')) cout<<(a*b)<<endl;
    else cout<<"Yes"<<endl;







    return 0;
}
