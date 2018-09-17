#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
            break;

        int d,i,j,x;
        d=a-b;
        if(d<0)
            d=d*(-1);

        if(d<=50)
            cout<<d<<endl;
        else if(b>a)
        {
            d=(100-b)+a;
            cout<<d<<endl;
        }
        else if(a>b)
        {
            d=(100-a)+b;
            cout<<d<<endl;
        }
    }
}
