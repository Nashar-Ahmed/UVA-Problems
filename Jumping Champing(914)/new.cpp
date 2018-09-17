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

    int t;
    cin>>t;
    while(t--)
    {
        long long int b,x,n,cnt=0,i,j=0,u,l,z=0;
        long long int a[200]={0};

        cin>>l>>u;
        if(l>u)
            swap(l,u);
        if(l<2)
            l=2;

        for(i=l; i<=u; i++)
            if(s[i]==0)
               prime[j++]=i;

        for(i=0; i<j-1; i++)
        {
            x=prime[i+1]-prime[i];
            a[x]=a[x]+1;
        }

        x=0;
        for(i=0; i<200; i++)
            if(a[i]>z)
            {
                x=i;
                z=a[i];
            }
        sort(a,a+200);
        if((a[199]-a[198]!=0))
            cout<<"The jumping champion is "<<x<<endl;
        else
            cout<<"No jumping champion"<<endl;
    }

    return 0;

}

