#include<bits/stdc++.h>
#define mx 10000000
using namespace std;

int prime[mx];
bool sieve[mx];

void sieve_prime()
{
    int i,j;
    for(i=4; i<mx; i+=2)
        sieve[i]=1;

    for(i=3; i<=sqrt(mx); i+=2)
    {
        if(sieve[i]==0)
            for(j=i*i; j<mx; j=j+2*i)
                sieve[j]=1;
    }
}

int main()
{
    int i,j=0;
    sieve_prime();

    for(i=2; i<mx; i++)
        if(sieve[i]==0)
           prime[j++]=i;

    for(i=0; i<100; i++)
        cout<<prime[i]<<" ";
}

