#include<bits/stdc++.h>
using namespace std;


int n;
int a[2005];
int dp[2005][105][105];

int call(int i,int left,int right)
{
    if(i >= n)
        return 0;
    if(dp[i][left][right] != -1)
        return dp[i][left][right];

    int res1=0,res2=0,res3=0,ans=0;
    if(left==0 || left<a[i])
        res1 = 1 + call(i+1, a[i], right);
    if(right==0 || right>a[i])
        res2 = 1 + call(i+1, left, a[i]);
    res3 = call(i+1, left, right);

    ans = max(res1, res2);
    ans = max(ans, res3);
    dp[i][left][right] = ans;

    return ans;
}


int main()
{
    int test;
    scanf("%d",&test);

    while(test--)
    {
        int i,j,x,y,ans=0;

        scanf("%d",&n);
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        memset(dp,-1,sizeof(dp));

        ans = call(0,0,0);
        printf("%d\n",ans);
    }
    return 0;
}
