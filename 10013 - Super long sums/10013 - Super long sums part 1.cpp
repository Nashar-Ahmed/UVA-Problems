#include<bits/stdc++.h>
using namespace std;
#define mx 1000010

int main()
{
    int tst;
    cin>>tst;

    while(tst--)
    {
        int m,i,j,x,y,l,carry=0;
        int a1[mx],a2[mx];
        int sum[mx]={0};

        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>a1[i]>>a2[i];
        }

        l=m;
        for(i=m-1; i>=0; i--)
        {
            x=a1[i]+a2[i]+carry;
            carry=x/10;
            x=x%10;
            sum[l]=x;
            l--;
        }
        if(carry!=0)
            sum[0]=carry;


        if(sum[0]!=0)
            for(i=0; i<=m;i++)
                cout<<sum[i];
        else
            for(i=1; i<=m; i++)
                cout<<sum[i];
        cout<<endl;
        if(tst!=0)
           cout<<endl;
    }
    return 0;
}
