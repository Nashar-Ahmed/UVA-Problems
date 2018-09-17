#include<bits/stdc++.h>
#define m 9000000
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

int checkprime(long long n)
{
    int i,k,flag=1;
    k=sqrt(n);


    if(n>2){
    for(i=2; i<=k; i++)
        if(n%i==0)
        {
            flag=0;
            break;
        }
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


    long long n;
    while(cin>>n && n!=0)
    {
        int flag=0,cnt=0,r=1,ans,re;
        int a[1000];
        long long x;

        j=0;
        flag=checkprime(n);
        if(flag==0)
        {
            x=n;
            for(i=0; i<m; i++)
            {
                cnt=0;
                while(x%prime[i]==0)
                {
                    cnt++;
                    x=x/prime[i];
                }

                if(cnt!=0)
                    a[j++]=cnt;
                if(x<m && s[x]==0 && x!=1)
                {
                    a[j++]=1;
                    break;
                }
                if(x==1)
                    break;
            }
        }
        else
            a[j++]=1;

       for(i=0; i<j; i++)
           r=r*(2*a[i]+1);

       if(n!=1)
         ans=r/2 +1;
       else
          ans=1;
       cout<<n<<" "<<ans<<endl;
    }
    return 0;
}

