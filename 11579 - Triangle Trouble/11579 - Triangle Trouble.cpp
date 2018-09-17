#include<bits/stdc++.h>
#define mx 10111
using namespace std;
int main()
{
    int tst;
    cin>>tst;

    while(tst--)
    {
        long long n,i,j,cnt=0,l;
        double a[mx]={0.0},p,area,x,y,z,m;
        int flag=0;

        cin>>n;
        for(i=0; i<n; i++)
            cin>>a[i];

        sort(a,a+mx);
        for(i=mx-1; i>=l; i--)
        {
            if((i-1)>l && (i-2)>=l)
            {
                x=a[i];
                y=a[i-1];
                z=a[i-2];

                if((x+y)>z && (x+z)>y && (y+z)>x)
                {
                    flag=1;

                    p=(x+y+z)/2;
                    m=p*(p-x)*(p-y)*(p-z);
                    area=sqrt(m);
                    break;
                }
            }
        }

        if(flag==1)
            printf("%.2lf\n",area);
        else
            printf("0.00\n");
    }

    return 0;
}
