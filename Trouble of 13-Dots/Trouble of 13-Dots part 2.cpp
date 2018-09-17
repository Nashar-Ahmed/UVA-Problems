#include<bits/stdc++.h>
using namespace std;

int cap,n;
//int cost[105],profit[105];
int dp[105][10005][2];
struct node
{
    int cost,profit;
}a[105];




bool cmp(struct node x,struct node y)
{
    return (bool)(x.cost < y.cost);
}





int call(int i,int amount,int flag,int cap)
{
    if(i >= n)
        return 0;
    if(dp[i][amount][flag] != -1)
        return dp[i][amount][flag];

    int res1=0,res2=0,ans=0;

    if(amount + a[i].cost > 2000 && amount+a[i].cost<=(cap+200) && flag == 0)
    {
        res1 = a[i].profit + call(i+1, amount+a[i].cost, 1,cap+200);
    }
    else if(amount + a[i].cost <= cap)
        res1 = a[i].profit + call(i+1, amount+a[i].cost, flag,cap);
    res2 = call(i+1, amount, flag,cap);

    ans = max(res1,res2);
    dp[i][amount][flag] = ans;

    return ans;
}

int main()
{
    while(scanf("%d%d",&cap,&n)==2)
    {
        int i,j,x,y,ans=0;
        for(i=0; i<n; i++)
            scanf("%d%d",&a[i].cost,&a[i].profit);

        sort(a,a+n,cmp);
        memset(dp,-1,sizeof(dp));
        ans = call(0,0,0,cap);
        printf("%d\n",ans);
    }
    return 0;
}
