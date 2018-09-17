#include<bits/stdc++.h>
using namespace std;

int a[105][105];
int dp[105];
int amount[105];


int call(int ind)
{
    if(amount[ind] == 0)
        return 0;
    if(dp[ind] != -1)
        return dp[ind];

    int ans=-1,res=0;
    int i,j,x,y;



    for(i=1; i<=amount[ind]; i++)
    {
        res = 1 + call(a[ind][i]);
        if(res > ans)
            ans = res;
        res = 0;
    }

    if(ans > 0)
         ans = ans + amount[ind] - 1;
    else
        ans = amount[ind];

    dp[ind] = ans;
    return dp[ind];
}



int main()
{
    int n;

    while(scanf("%d",&n)==1 && n)
    {
        int i,j,x,y,mx = -1,mxind,ans;
        int res[105];

        for(i=1; i<=n; i++)
        {
            cin>>amount[i];
            for(j=1; j<=amount[i]; j++)
            {
                cin>>a[i][j];
            }
        }

        memset(dp,-1,sizeof(dp));
        for(i=1; i<=n; i++)
        {
            ans = call(i);
            if(ans > amount[i])
                res[i] = ans;
            else
                res[i] = amount[i];
        }

        for(i=1; i<=n; i++)
            if(res[i] > mx)
            {
                mxind = i;
                mx = res[i];
            }

        cout<<mxind<<endl;
    }
    return 0;
}
