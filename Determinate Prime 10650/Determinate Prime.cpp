#include<bits/stdc++.h>
#define m 1000000
using namespace std;

bool s[m];

void sieve(void)
{
    int i,j;
    s[0]=1; s[1]=1;

    for(i=4; i<m; i+=2)
         s[i]=1;
    for(i=3; i<=sqrt(m); i++)
    {
        if(s[i]==0)
        {
            for(j=i*i; j<m; j+=2*i)
                s[j]=1;
        }
    }
}

int main()
{
    sieve();

    int u,l;
    while(cin>>l>>u)
    {
        if(l==0 && u==0)
            break;
        if(l>u)
            swap(l,u);
        if(l<2)
            l=2;



        int i,j=0,k,n,cnt=0,x,y,z=0,flag=0;
        int dis[32222],prime[32222];
        for(i=l; i<=u; i++)
            if(s[i]==0)
               prime[j++]=i;

        for(i=0; i<30; i++)
            cout<<prime[i]<<" ";

        for(i=0; i<j; i++)
            if((i+1)<j)
               dis[i]=prime[i+1]-prime[i];


        z=j-1;
        for(i=0; i<z; i++)
        {
            j=i;
            cnt=0;
            flag=0;
            x=dis[i];
            while(x==dis[i+1] && (i+1)<z)
            {
                cnt++;
                i++;
            }
            if(cnt>=1)
            {
                y=j+(cnt+1);
                if(s[(pr)])
                    flag=1;


                if(flag==0){
                for(k=j; k<=y; k++)
                    cout<<prime[k]<<" ";
                cout<<endl;
                i--;
                }
            }

        }







    }
    return 0;

}

