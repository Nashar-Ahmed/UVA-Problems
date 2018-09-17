#include<bits/stdc++.h>
using namespace std;
#define mem(x,y) memset(x,y,sizeof(x));
int cost[1001];
int weight[1001];
int dp[1004][1004];
int cap;
int n;

int func(int i,int w)
{
    if(i == n+1)
        return 0;
    if(dp[i][w]!= -1)
        return dp[i][w];

    int profit1=0,profit2=0;

    if(w + weight[i] <= cap)
        profit1 = cost[i] + func(i+1, w+weight[i]);

    profit2=func(i+1, w);

    dp[i][w] = max(profit1 , profit2);
    return dp[i][w];
}


int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int i;
        cin>>n;

        for(i=1; i<=n; i++)
            cin>>cost[i]>>weight[i];

        int g,sum=0;
        cin>>g;

        for(i=1; i<=g; i++)
        {
            mem(dp,-1);
            cin>>cap;
            sum+=func(1,0);
        }

        cout<<sum<<endl;
    }
    return 0;
}
