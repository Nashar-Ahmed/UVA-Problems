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

    long int i,j=0,t;
    for(i=2; i<m; i++)
        if(s[i]==0)
           prime[j++]=i;

    cin>>t;
    while(t--)
    {
        int x,p,i,j,n;
        cin>>n;
        x=n/2;

        for(i=0;  ;i++)
        {
            if(prime[i]>x)
            {
                p=prime[i];
                break;
            }
        }
        cout<<p<<endl;
    }
    return 0;

}
