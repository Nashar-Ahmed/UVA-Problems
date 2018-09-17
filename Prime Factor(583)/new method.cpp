#include<bits/stdc++.h>
#define m 1000
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

    int i,j=0,x,cnt=0,k=0;
    int a[1000];
    for(i=2; i<m; i++)
        if(s[i]==0)
           prime[j++]=i;

    cin>>x;
    j=0;
    for(i=prime[k]; i<=sqrt(x); i=prime[k])
    {
        k++;
        cout<<i<<" ";
        while(x%i==0)
        {
            a[j++]=i;
            x=x/i;
        }
    }

}

