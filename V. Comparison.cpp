//BISMILLAH
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    char ch;
    cin>>a>>ch>>b;
    if((a==b)&&ch=='=') cout<<"Right"<<endl;
    else if((a>b)&&ch=='>') cout<<"Right"<<endl;
    else if((b>a)&&ch=='<') cout<<"Right"<<endl;
    else cout<<"Wrong"<<endl;



    return 0;
}



