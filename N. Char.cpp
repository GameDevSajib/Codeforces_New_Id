#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c>='a'&&c<='z')
    {
        char x=toupper(c);
        cout<<x<<endl;
    }
       if(c>='A'&&c<='Z')
    {
        char y=tolower(c);
        cout<<y<<endl;
    }


    return 0;
}
