#include<bits/stdc++.h>
using namespace std;

int a[5000000];
int dp[5000000];
int n;

int call(int ind)
{
    if(dp[ind] != -1)
        return dp[ind];

    int mx = 0,ans=0;

    for(int i=ind+1; i<=n; i++)
    {
        if(a[ind] >= a[i])
            ans = call(i);
        if(ans > mx)
            mx = ans;
    }
    mx = mx + 1;
    dp[ind] = mx;
    return dp[ind];
}

int main()
{
    int x,C=0;

    while(cin>>x)
    {
        if(x == -1)
            break;

        int i,j=2,y,z,mx = -1,ans;

        a[1] = x;
        while(cin>>x && x != -1)
            a[j++] = x;
        n = j-1;

        memset(dp,-1,sizeof(dp));
        for(i=1; i<=n; i++)
        {
            ans = call(i);
            if(ans > mx)
                mx = ans;
        }

        printf("Test #%d:\n",++C);
        printf("  maximum possible interceptions: %d\n",mx);

        //printf("\n");
    }
    return 0;
}
