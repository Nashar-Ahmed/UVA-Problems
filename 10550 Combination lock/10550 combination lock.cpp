#include<bits/stdc++.h>
using namespace std;

int clockw(int a,int b)
{
    int d;

    if(a>b)
        d=(a-b)*9;
    else if(a<b)
    {
        d=(b-a)*9;
        d=360-d;
    }
    else if(a==b)
        d=0;


    return d;
}


int antic(int a,int b)
{
    int d;

    if(a>b)
    {
        d=(a-b)*9;
        d=360-d;
    }
    else if(a<b)
        d=(b-a)*9;
    else if(a==b)
        d=0;

    return d;
}


int main()
{
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0 && b==0 && c==0 &&d==0)
            break;


        int x,y,z,n=1080,sum;
        x=clockw(a,b);
        y=antic(b,c);
        z=clockw(c,d);

        sum=n+x+y+z;
        cout<<sum<<endl;

    }

    return 0;
}
