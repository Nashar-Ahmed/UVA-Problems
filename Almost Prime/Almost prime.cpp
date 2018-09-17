#include<iostream>
#include<cmath>
#define mx 1000010
#define m 1000000

using namespace std;

bool sive_prime[mx];
long int prime[m];

void sieve(void)
{
    int i,j;
    for(i=4;i<mx;i+=2)
        sive_prime[i]=1;
    for(i=3; i<sqrt(mx); i+=2)
    {
        if(sive_prime[i]==0)
        {
            for(j=i*i; i<mx; i+=2*i)
                sive_prime[j]=1;
        }
    }
}


int main()
{
    int t;
    long int l,u,h,j=1,i,x,c=0,counter=0;

    sieve();

    for(i=2;i<mx;i++)
        if(sive_prime[i]==0)
           prime[j++]=i;

    cin>>t;

    while(t--)
    {
        cin>>l>>u;
        if(l<2)
            l=2;

        for(x=l; x<=u; x++)
        {
            if(sive_prime[x]==1)
            {
                cout<<x;
                for(i=1 ;i<x/2; i++)
                {
                    if(i%prime[i]==0)
                        counter++;
                    if(counter>1)
                        break;
                }
                if(counter==1)
                    c++;
            }
        }
        cout<<c<<endl;
    }
}
