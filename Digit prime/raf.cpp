#include<bits/stdc++.h>
#define nmax 1000000
using namespace std;


bool primes[nmax];
int countP[nmax];
int a, b, result;

int sumD(int in)
{
 int res = 0;
 int x = in;
 while(x)
 {
  res = res + (x%10);
  x = x/10;
 }
 return res;
}
void ini()
{
 memset(primes,true,nmax);
 primes[0] = false;
 primes[1] = false;
 int sum = 0;
 for (int i = 2; i <= (int)sqrt(nmax)+1 ; i++)
 {
  if(primes[i])
  {
   for (int j = i*i; j < nmax ; j+=i)
   {
    primes[j] = false;
   }
  }
 }

 for (int i = 0; i <= nmax; i++)
 {
  if(primes[i] && primes[ sumD(i)])
   sum++;
  countP[i] = sum;
 }
}
////////////////////////////////
void input()
{
 a = b = result = 0;
 scanf("%d %d",&a, &b);
}

void process()
{
 result = abs(countP[b] - countP[a-1]);
}

void output()
{
 printf("%d\n",result );
}

int main()
{
 //freopen(fi,"r",stdin);
 //freopen(fo,"w",stdout);

 int ntest;
 ini();
 scanf("%d",&ntest);
 for (int i = 0; i < ntest ; i++)
 {
  input();
  process();
  output();
 }
 return 0;
}
