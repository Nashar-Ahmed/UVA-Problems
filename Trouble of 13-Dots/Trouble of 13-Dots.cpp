#include<bits/stdc++.h>
using namespace std;

int bud,n;
int cost[105],profit[105];
int dp[105][10002];
int dir[105][10002];

int call(int i,int amount)
{
    if(i >= n)
        return 0;
    if(dp[i][amount] != -1)
        return dp[i][amount];
    int res1=0,res2=0,ans=0;
    if(amount + cost[i] <= bud)
        res1 = profit[i] + call(i+1, amount+cost[i]);
    res2 = call(i+1, amount);

    ans = max(res1,res2);
    if(ans == res1)
        dir[i][amount] = 1;
    else
        dir[i][amount] = 2;
    dp[i][amount] = ans;
    return ans;
}


int call_check(int i,int amount)
{
    if(i >= n)
        return 0;

    int res=0;
    if(dp[i][amount] == 1)
        res = cost[i] + call(i+1, amount+cost[i]);
    else
        res = call(i+1, amount);
    return res;
}



int main()
{
    while(scanf("%d%d",&bud,&n)==2)
    {
        int i,j,x,y,ans=0,t_bud;

        for(i=0; i<n; i++)
            scanf("%d%d",&cost[i],&profit[i]);
        memset(dp,-1,sizeof(dp));
        memset(dir,-1,sizeof(dir));

        bud += 200;

        ans = call(0,0);
        cout<<ans<<endl;
        t_bud = call_check(0,0);
        cout<<t_bud<<endl;
        if(t_bud > 2000)
        {
            printf("%d\n",ans);
        }
        else
        {
            bud-=200;
            memset(dp,-1,sizeof(dp));
            ans = call(0,0);
            printf("%d\n",ans);
        }
    }
    return 0;
}
