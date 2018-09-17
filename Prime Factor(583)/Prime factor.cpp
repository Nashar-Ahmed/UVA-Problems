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

    long long int i,j=0,x;
    for(i=2; i<m; i++)
        if(s[i]==0)
           prime[j++]=i;

    cin>>x;

    while(x)
    {
        long long int i,j=0,n,cnt=0;
        long long int a[1000];
        n=x;

        if(n<0)
            n=n*(-1);

        for(i=0; prime[i]<=(sqrt(n)); i++)
        {

            while(n%prime[i]==0)
            {
                a[j++]=prime[i];
                n=n/prime[i];
                cnt++;
            }
        }


        cout<<x<<" = ";
        if(x<0)
            cout<<"-1 x ";
        for(i=0; i<j; i++)
        {
            cout<<a[i];
            if(i<(j-1))
                cout<<" x ";
        }

        if(n>1 && cnt>0)
            cout<<" x "<<n;
        else if(n>1 && cnt==0)
            cout<<n;

        cout<<endl;

        cin>>x;

    }

    return 0;

}

