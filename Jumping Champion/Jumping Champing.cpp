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
    sieve_prime();
    int tst;
    cin>>tst;
    while(tst--)
    {
        int l,u,x,y,i,j=0,cnt=0;
        int a[200]={0},b[200]={0};
        int p[1000000];
        cin>>l>>u;
        if(l>u)
            swap(l,u);
        for(i=l; i<=u; i++)
        {
            if(sieve[i]==0){
                prime[j++]=i;
                cnt++;
            }
        }




    }


}
