#include<bits/stdc++.h>
using namespace std;

long long n,d,m,q;
long long a[205];
long long dp[205][12][22];



long long call(int i,int taken,int div)
{
    if(taken == m)
        if(div == 0)
           return 1;
        else
            return 0;
    if(i >= n)
        return 0;
    if(dp[i][taken][div] != -1)
        return dp[i][taken][div];

    long long res1=0,res2=0,ans=0;
    if(taken+1 <= m)
        res1 = call(i+1, taken+1, ((div+a[i])%d + d)%d);
    res2 = call(i+1, taken, div);

    ans = res1 + res2;
    dp[i][taken][div] = ans;
    return ans;
}

int main()
{
    long long C=0;
    while(scanf("%lld%lld",&n,&q)==2)
    {
        if(n == 0 && q ==0)
           break;
        long long i,j,x,y,ans=0;

        for(i=0; i<n; i++)
            scanf("%lld",&a[i]);
        printf("SET %lld:\n",++C);
        for(i=1; i<=q; i++)
        {
            memset(dp,-1,sizeof(dp));
            scanf("%lld%lld",&d,&m);
            ans = call(0,0,0);
            printf("QUERY %lld: %lld\n",i,ans);
        }
    }
    return 0;
}
