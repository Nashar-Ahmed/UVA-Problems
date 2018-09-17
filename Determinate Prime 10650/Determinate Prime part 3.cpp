#include<bits/stdc++.h>
#define m 1000000
using namespace std;

int prime[m];
bool s[m];

void sieve(void)
{
    int i,j;
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

    long int i,j=0;
    for(i=2; i<m; i++)
        if(s[i]==0)
           prime[j++]=i;

    int mx=32222;
    int dis[mx];
    for(i=0; i<mx-1; i++)
        dis[i]=prime[i+1] - prime[i];

    int l,u;
    while(cin>>l>>u)
    {
        if(l>u)
            swap(l,u);

        int n,cnt=0,x,y,z,flag=0,k;

        for(i=0; i<u; i++)
        {
            if(prime[i]>=l)
            {
                j=i;
                cnt=0;
                flag=0;
                x=dis[i];
                while(x==dis[i+1] && prime[i+2]<=u)
                {
                    cnt++;
                    i++;
                }
                if(cnt>=1)
                    if(dis[j-1]==x || dis[i+1]==x)
                       flag=1;

                if(cnt>=1 && flag==0)
                {
                    y=j+(cnt+1);
                    for(k=j; k<=y; k++)
                        cout<<prime[k]<<" ";
                    cout<<endl;
                    i--;
                }
            }
        }






    }


}
