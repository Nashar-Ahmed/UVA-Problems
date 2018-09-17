#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c;
    int tst=0;
    while(cin>>n>>m>>c)
    {
        if(n==0 && m==0 && c==0)
            break;
        tst++;


        int i,j,x,l,mx=0,tpower=0,flag=0;
        int power[21],a[21]={0};

        for(i=1; i<=n; i++)
            cin>>power[i];

        for(i=1; i<=m; i++)
        {
            cin>>x;

            if(a[x]==0)
            {
                a[x]=1;

                tpower=tpower+power[x];
                if(tpower>mx)
                    mx=tpower;

                if(tpower>c)
                    flag=1;
            }
            else if(a[x]==1)
            {
                a[x]=0;
                tpower=tpower-power[x];
            }
        }




        if(flag==1)
        {
            printf("Sequence %d\n",tst);
            printf("Fuse was blown.\n\n");
        }
        else
        {
            printf("Sequence %d\n",tst);
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n",mx);
        }
    }
    return 0;
}
