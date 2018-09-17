#include<bits/stdc++.h>
using namespace std;
int findprime(long long n)
{
    long long i;
    int flag=1;
    for(i=2; i<=sqrt(n); i++)
        if(n%i==0)
        {
            flag=0;
            break;
        }

    return flag;
}


int main()
{
    int n;
    while(cin>>n && n!=0)
    {
        long long x,y;
        int flag1=1,flag2=1;

        if(n!=2)
            flag1=findprime(n);

        if(flag1==1)
        {
            y=pow(2,n)-1;
            flag2=findprime(y);
        }


        if(flag1==1 && flag2==1)
            x=pow(2,n-1)*(pow(2,n)-1);


        if(flag1==1 && flag2==1)
            printf("Perfect: %lld!\n",x);
        else if(flag1==0)
            printf("Given number is NOT prime! NO perfect number is available.\n");
        else if(flag1==1 && flag2==0)
            printf("Given number is prime. But, NO perfect number is available.\n");
    }
    return 0;
}
