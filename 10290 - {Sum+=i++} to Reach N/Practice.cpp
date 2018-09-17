#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define MAX 10000100
#define ll long long int
int l ;
vector<int>primes;
bool sieve[MAX] ;


void genPrimes()
{
    primes.push_back(2) ;
    long long i,j ;
    for(i=3;i<MAX;i+=2)
    {
        if(sieve[i]==0)
        {
            primes.push_back(i);
            for(j=i*i;j<MAX;j+=(i+i))
                sieve[j] = 1 ;
        }
    }
}
ll NumOfDiv(ll n)
{
    ll tmp = sqrt(n),i ;
    ll ret = 1 ;


    while(n%2==0)   n/=2;



    for(i=1;   primes[i]<=tmp && i<primes.size();   i++)
    {
        if(n % primes[i] == 0)
        {
            ll cnt =  0 ;
            while(n % primes[i] == 0)
            {
                cnt ++ ;
                n /= (ll)primes[i] ;
            }
            tmp=sqrt(n);
            ret *= (cnt+1) ;
        }
    }
    if(i==primes.size()) return 1;
    if(n>1)     ret *= 2 ;
    return ret - 1 ;
}
int main()
{
    genPrimes();
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n<3) printf("1\n");
        else printf("%lld\n",NumOfDiv(n)+1);
    }
}
