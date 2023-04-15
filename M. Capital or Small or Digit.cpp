#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[26];
    for(ll i=0;i<s.size();i++)
    {
       a[i]=s[i];
       //cout<<a[i]<<endl;
    }
    if(a[0]>=97)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else if((a[0]>=65)&&(a[0]<=97))
    {
         cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else{
        cout<<"IS DIGIT"<<endl;
    }



    return 0;
}
