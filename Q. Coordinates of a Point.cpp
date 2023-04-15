#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    if(a==0&&b==0) cout<<"Origem"<<endl;
    else if (b == 0 and (a > 0 or a < 0)) cout << "Eixo X\n";
	else if (a == 0 and (b > 0 or b < 0)) cout << "Eixo Y\n";
    if(a>0&&b>0) cout<<"Q1"<<endl;
    if(a<0&&b<0) cout<<"Q3"<<endl;
    if(a<0&&b>0) cout<<"Q2"<<endl;
    if(a>0&&b<0) cout<<"Q4"<<endl;


    return 0;
}
