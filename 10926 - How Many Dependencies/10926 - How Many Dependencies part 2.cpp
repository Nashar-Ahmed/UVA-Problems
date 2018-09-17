#include<bits/stdc++.h>
using namespace std;

int dp[105];
int a[105][105];
int amount[105];
int profit[105];
int visited[105];


int call(int n)
{
    if(amount[n] == 0)
        return 0;
    if(dp[n] != -1)
        return dp[n];

    int ans=0,res=0,i,j;

    for(i=1; i<=amount[n]; i++)
    {
        if(visited[a[n][i]] == 0)
        {
            //cout<<a[n][i]<<" "<<endl;
            visited[a[n][i]] = 1;
            ans += 1 + call(a[n][i]);
        }
    }

    dp[n] = ans;
    return dp[n];
}




int main()
{
    int n;

    while(cin>>n && n)
    {
        int i,j,x,y,m,mx = -1,mxind;

        memset(dp,-1,sizeof(dp));

        for(i=1; i<=n; i++)
        {
            cin>>m;
            amount[i] = m;
            for(j=1; j<=amount[i]; j++)
                cin>>a[i][j];
        }


        for(i=1; i<=n; i++){
            memset(dp,-1,sizeof(dp));
            memset(visited,0,sizeof(visited));
            profit[i] = call(i);
        }

        for(i=1; i<=n; i++)
        {
            //cout<<".................."<<profit[i]<<endl;
            if(profit[i] > mx)
            {
                mx = profit[i];
                mxind = i;
            }
        }

        cout<<mxind<<endl;

    }
    return 0;
}
