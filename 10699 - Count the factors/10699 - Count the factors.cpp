#include<bits/stdc++.h>
#define m 1000000
using namespace std;

int prime[m];
bool s[m];

void sieve(void)
{
    long long int i,j;
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

    long long int i,j=0;
    for(i=2; i<m; i++)
        if(s[i]==0)
           prime[j++]=i;


    long long n;

    while(cin>>n && n!=0)
    {
        long long x,cnt=0,flag=0,a;
        a=n;

        for(i=0; i<n; i++)
        {
            flag=1;
            x=prime[i];
            while(a%x==0)
            {
                if(flag==1)
                {
                    cnt++;
                    flag=0;
                }
                a=a/x;
            }
            if(s[a]==0)
            {
                cnt++;
                break;
            }

        }
        cout<<n<<" : "<<cnt<<endl;

    }


    return 0;

}

