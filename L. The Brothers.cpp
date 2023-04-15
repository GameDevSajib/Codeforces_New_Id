#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s1;
    string s2;
    string s3;
    string s4;
    cin>>s1>>s2;
    cin>>s3>>s4;
    ll len1=s2.size();
    ll len2=s4.size();
    ll flag=0;
    for(ll i=0,j=0;i<len1&&j<len2;i++,j++)
    {
        if(s2[i]!=s4[i])
        {
            flag=1;
            break;
        }

    }
    if(flag==0) cout<<"ARE Brothers"<<endl;
    else cout<<"NOT"<<endl;


    return 0;
}
