#include<bits/stdc++.h>
#define m 1000000
using namespace std;

long long int prime[m];
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
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int l,u,n,i,j=0,p,cnt=0,sum=0;

        scanf("%lld%lld",&l,&u);
        if(l>u)
            swap(l,u);

        for(i=l; i<=u; i++)
            if(s[i]==0)
               prime[j++]=i;

        for(i=0; i<j; i++)
        {
            n=prime[i];
            while(n>0)
            {
                p=n%10;
                sum=sum+p;
                n=n/10;
            }
            if(s[sum]==0)
                cnt++;
            sum=0;
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
