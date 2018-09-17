#include<iostream>
#include<cmath>
#include<cstdio>
#define m 20000005
using namespace std;

int twin_prime[m];
bool prime_bool[m];

void sieve_prime()
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
int n,i,j=1;

sieve_prime();

for(i=2;i<m;i++)
{
if(prime_bool[i]==0 && prime_bool[i+2]==0)
twin_prime[j++]=i;

}

while(cin>>n)
{

cout<<"("<<twin_prime[n]<<", "<<twin_prime[n]+2<<")"<<endl;
}
}
