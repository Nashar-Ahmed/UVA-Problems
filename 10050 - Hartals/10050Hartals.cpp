#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;

    while(tst--)
    {
        int i,j,x,y,z,P,N,cnt=0;
        int a[5000]={0},p[200]={0};

        cin>>N;
        cin>>P;

        for(i=1; i<=P; i++)
            cin>>p[i];

        for(i=1; i<=P; i++)
            for(j=1; j<=N; j++)
               if(j%p[i]==0 && a[j]==0)
                  a[j]=1;

        for(i=6; i<=N; i+=7)
        {
            a[i]=0;
            if((i+1)<=N)
                a[i+1]=0;
        }

        for(i=1; i<=N; i++)
            cnt=cnt+a[i];

        cout<<cnt<<endl;
    }

    return 0;
}
