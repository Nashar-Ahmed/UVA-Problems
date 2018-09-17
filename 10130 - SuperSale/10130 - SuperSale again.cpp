#include<bits/stdc++.h>
using namespace std;

int weight[110];
int cost[110];
int dp[110][110];

int n,cap;


int func(int i,int w)
{
    if(i>n)
        return 0;

    if(dp[i][w] != -1)
        return dp[i][w];

    int profit1=0,profit2=0;

    if(w+weight[i] <= cap)
        profit1 = cost[i] + func(i+1 , w+weight[i]);

    profit2 = func(i+1 , w);
    dp[i][w] = max(profit1 , profit2);
    return dp[i][w];
}


int main()
{
    int test;
    scanf("%d",&test);

    while(test--)
    {
        int i,j,n,ans=0;
        int g;

        scanf("%d",&n);
        for(i=1; i<=n; i++)
            scanf("%d%d",&cost[i],&weight[i]);

        scanf("%d",&g);
        cout<<g<<endl;
        for(i=0; i<g; i++)
        {
            memset(dp,-1,sizeof(dp));
            scanf("%d",&cap);
            //cout<<cap<<"...........";
            ans+= func(1,0);
        }
        cout<<ans<<endl;
    }
}
