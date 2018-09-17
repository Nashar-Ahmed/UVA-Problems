#include<bits/stdc++.h>
using namespace std;

int n1,n2;
int tower1[105],tower2[105];
int dp[105][105];


int call(int i,int j)
{
    if(i>=n1 || j>=n2)
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];

    int res1=0,res2=0,ans=0;
    if(tower1[i] == tower2[j])
        ans = 1 + call(i+1, j+1);
    else
    {
        res1 = call(i+1, j);
        res2 = call(i, j+1);
        ans = max(res1,res2);
    }
    dp[i][j] = ans;
    return ans;
}


int main()
{
    int C=0;
    while(scanf("%d%d",&n1,&n2)==2)
    {
        if(n1==0 && n2==0)
            break;
        int i,j,x,y,ans=0,t1=0,t2=0;
        int cnt1=0,cnt2=0;

        for(i=0; i<n1; i++){
            scanf("%d",&tower1[i]);
        }
        for(i=0; i<n2; i++){
            scanf("%d",&tower2[i]);
        }
        memset(dp,-1,sizeof(dp));

        ans = call(0,0);

        printf("Twin Towers #%d\n",++C);
        printf("Number of Tiles : %d\n",ans);
        printf("\n");
    }
    return 0;
}
