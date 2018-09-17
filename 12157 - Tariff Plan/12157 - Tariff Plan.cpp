#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,c=0;
    cin>>tst;
    while(tst--)
    {
        c++;

        int n,i,j;
        long long a[20];
        int mile=0,juice=0,x;
        cin>>n;
        for(i=0; i<n; i++)
            cin>>a[i];

        mile=0;
        for(i=0; i<n; i++)
        {
            x=a[i]/30;
            mile=mile+(x*10+10);
        }
        juice=0;
        for(i=0; i<n; i++)
        {
            x=a[i]/60;
            juice=juice+(x*15+15);
        }

        if(mile<juice)
            printf("Case %d: Mile %d\n",c,mile);
        else if(mile>juice)
            printf("Case %d: Juice %d\n",c,juice);
        else if(mile==juice)
            printf("Case %d: Mile Juice %d\n",c,juice);
    }
    return 0;
}
