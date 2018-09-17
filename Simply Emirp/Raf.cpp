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
    long long int n;
    sieve();

    while(cin>>n)
    {
        long long int p,x,i,j,r=0;
        int flag=0;
        x=n;

        if(s[x]==1)
            cout<<"Not prime\n";
        else
        {
            while(x>0)
            {
                p=x%10;
                r=r*10 + p;
                x=x/10;
            }

            if(s[r]==0)
                flag=1;

            if(flag==1)
                cout<<"Emirp\n";
            else
                cout<<"Simple prime\n";
        }
    }

}
