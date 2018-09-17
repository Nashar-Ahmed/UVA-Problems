#include<bits/stdc++.h>
using namespace std;

int t,w,n;
int dp[1005][1005];
int cost[50];
int depth[50];
int dir[1005][1005];
vector<int> v;

int call(int i,int weight)
{
    if(i>n)
        return 0;
    if(dp[i][weight] != -1)
        return dp[i][weight];

    int profit1=0,profit2=0;

    if(w*weight + w*depth[i] <= t)
        profit1 = cost[i] + call(i+1, weight+depth[i]);

    profit2 = call(i+1, weight);

    if(profit1 > profit2)
    {
        dp[i][weight] = profit1;
        dir[i][weight] = 1;
    }
    else
    {
        dp[i][weight] = profit2;
        dir[i][weight] = 2;
    }

    return dp[i][weight];
}

void direction(int i,int weight)
{
    if(dir[i][weight] == -1)
        return;

    if(dir[i][weight] == 1)
    {
        v.push_back(i);
        //printf("%d %d\n",depth[i],cost[i]);
        direction(i+1, weight+depth[i]);
    }
    else
        direction(i+1,weight);
}



int main()
{
    while((scanf("%d%d",&t,&w) == 2))
    {
        int i,j,x,y,ans=0;
        scanf("%d",&n);

        for(i=1; i<=n; i++)
            scanf("%d%d",&depth[i],&cost[i]);

        memset(dp,-1,sizeof(dp));
        memset(dir,-1,sizeof(dir));

        w = 3*w;
        ans = call(1,0);
        printf("%d\n",ans);
        if(ans == 0)
            printf("0\n");
        else{
        direction(1,0);
        printf("%d\n",v.size());
        for(i=0; i<v.size(); i++)
            printf("%d %d\n",depth[v[i]],cost[v[i]]);
        }
        printf("\n");
        v.clear();
    }

    return 0;
}

