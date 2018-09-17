#include<bits/stdc++.h>
using namespace std;
long long a[1000];

int bigmode(long long base,long long pow,long long m)
{
    if(pow == 0)
        return 1;

    if(pow%2 == 0)
    {
        long long n = bigmode(base,pow/2,m)%m;
        return ((n%m)*(n%m))%m;
    }
    else
    {
        return ((base%m)*bigmode(base,pow-1,m)%m)%m;
    }
}


int main()
{
    long long b,p,m;

    while(cin>>b>>p>>m)
    {
        long long ans;
        ans = bigmode(b,p,m);
        cout<<ans<<endl;

    }

    return 0;
}
