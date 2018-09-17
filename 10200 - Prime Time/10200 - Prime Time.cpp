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

int isprime(int n)
{
    int i,flag=0;
    i=0;
    flag=1;
    while(prime[i]*prime[i]<=n)
    {
        if(n%prime[i]==0)
        {
            flag=0;
            break;
        }
        i++;
    }

    return flag;
}


int main()
{
    sieve();

    long int i,j=0;
    for(i=2; i<m; i++)
        if(s[i]==0)
           prime[j++]=i;



    int a,b;
    while(cin>>a>>b)
    {
        if(a>b)
            swap(a,b);

        int x,y,cnt=0,n;
        double ans;

        for(i=a; i<=b; i++)
        {
            n=i*i + i + 41;
            if(n<m){
                if(s[n]==0)
                   cnt++;
            }
            else
            {
                y=isprime(n);
                if(y==1)
                    cnt++;
            }
        }

        ans=(cnt*100.0)/(b-a+1);
        printf("%.2f\n",ans);
    }
    return 0;
}
