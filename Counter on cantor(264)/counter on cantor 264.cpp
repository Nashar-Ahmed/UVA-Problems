#include<bits/stdc++.h>
#define mx 100001000
using namespace std;
int a[mx]={0},a1[mx]={0};

int main()
{
    long long i,j=1,n,cnt=0,x,y;
    for(i=1; ; i++)
    {
        if(j>10000001)
            break;
        if(i%2!=0)
        {
            x=i;
            while(x!=0)
            {
                a[j++]=x;
                x--;
            }
        }
        if(i%2==0)
        {
            x=1;
            while(x<=i)
            {
                a[j++]=x;
                x++;
            }
        }

    }

    j=1;
    for(i=1; ; i++)
    {
        if(j>10000001)
            break;
        if(i%2!=0)
        {
            x=1;
            while(x<=i)
            {
                a1[j++]=x;
                x++;
            }
        }
        if(i%2==0)
        {
            x=i;
            while(x!=0)
            {
                a1[j++]=x;
                x--;
            }
        }

    }

    while(cin>>n)
    {
        cout<<"TERM "<<n<<" IS "<<a[n]<<"/"<<a1[n]<<endl;
    }

    return 0;

}
