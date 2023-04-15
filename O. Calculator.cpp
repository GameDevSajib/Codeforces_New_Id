#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    char ch;
    cin>>a>>ch>>b;
    if(ch=='+')
    {
        cout<<(a+b)<<endl;
    }
    else if(ch=='-')
    {
        cout<<(a-b)<<endl;
    }
    else if(ch=='*')
    {
        cout<<(a*b)<<endl;
    }
    else if(ch=='/')
    {
        cout<<(a/b)<<endl;
    }



    return 0;
}
