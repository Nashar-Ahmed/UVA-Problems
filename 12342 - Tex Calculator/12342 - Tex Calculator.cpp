#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,c=0;
    cin>>tst;
    while(tst--)
    {
        c++;

        long long n,x,sum=0;
        double tex=0;

        cin>>n;
        x=n;
        x=x-180000;
        if(x>=300000)
        {
            tex=tex+30000;
            x=x-300000;
        }
        else if(x>0)
        {
            tex=tex+(x*10.0)/100.0;
            x=0;
        }

        if(x>=400000)
        {
            tex=tex+60000;
            x=x-400000;
        }
        else if(x>0)
        {
            tex=tex+(x*15.0)/100.0;
            x=0;
        }

        if(x>=300000)
        {
            tex=tex+60000;
            x=x-300000;
        }
        else if(x>0)
        {
            tex=tex+(x*20.0)/100.0;
            x=0;
        }

        if(x>0)
        {
            tex=tex+(x*25.0)/100.0;
        }

        if(tex>0 && tex<2000)
            tex=2000;

        n=ceil(tex);

        printf("Case %d: %lld\n",c,n);
    }
    return 0;
}
