#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,tst;
    cin>>tst;
    for(t=1; t<=tst; t++)
    {
        int a[3];
        int i,j,n,flag=0;

        for(i=0; i<3; i++)
            cin>>a[i];
        flag=1;
        for(i=0; i<3; i++)
            if(a[i]>20)
            {
                flag=0;
                break;
            }

        if(flag==1)
            printf("Case %d: good\n",t);
        else
            printf("Case %d: bad\n",t);
    }
    return 0;
}
