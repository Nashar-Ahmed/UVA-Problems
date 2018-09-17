#include<bits/stdc++.h>
#define m 1000
using namespace std;


int prime[m];
bool prime_bool[m];

void sieve()
{
int i,j;

for(i=4; i<m; i+=2)
prime_bool[i]=1;


for(i=3;i<sqrt(m);i+=2)
{
if(prime_bool[i]==0)
{
for(j=i*i ;j<m; j+=2*i)
prime_bool[j]=1;
}
}
}


int main()
{
    sieve();

    int x,j=0,i;
    int a[100];
    for(i=2; i<m; i++)
        if(prime_bool[i]==0)
           prime[j++]=i;

    while(cin>>x)
    {
        int i,j=0,n,c=0;
        for(i=0; x>0; i++)
        {
            if(x%prime[i]==0)
            {
                a[c++]=prime[i];
                x=x/prime[i];
            }

        }

       // for(i=0; i<c; i++)
          //  cout<<a[i]<<" ";

    }
}
