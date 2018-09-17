#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x;
    cin>>a>>b;

    while(1)
    {
       x=b%a;
       if(x==0)
            break;
       b=a;
       a=x;
    }

    cout<<a;
}
