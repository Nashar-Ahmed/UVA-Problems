#include<bits/stdc++.h>
using namespace std;

int findflag(long long int N,long long int W)
{
    long long int flag=0;
    long long int i,j,a[100];

    for(i=0; i<W; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<W; i++)
        if(a[i]>=N)
        {
            flag=1;
            break;
        }

    return flag;
}

int main()
{
    long long int N,B,H,W;
    while(cin>>N>>B>>H>>W)
    {
        long long int fb,n,b,i,j=0,rent,x,cnt=0;
        long long int a[1000]={0};

        for(i=0; i<H; i++)
        {
            cin>>rent;
            rent=rent*N;

            x=findflag(N,W);

            if(rent<=B && x==1)
            {
                a[j++]=rent;
            }
        }

        sort(a,a+1000);



        for(i=0; i<1000; i++)
        {
            if(a[i]>0)
            {
                fb=a[i];
                cnt=1;
                break;
            }
        }

        if(cnt==1)
            cout<<fb<<endl;
        else
            cout<<"stay home\n";



    }
    return 0;
}
