#include<bits/stdc++.h>
using namespace std;

struct node
{
    int weight,iq,ind;
}a[1005];

bool cmp(struct node x,struct node y)
{
    return (bool)(x.weight < y.weight);
}

int n;
int dp[1005];
int dir[1005];

int call(int u)
{
    if(dp[u] != -1)
        return dp[u];
    int mx=0;
    int i,j,x;

    for(i=u+1; i<n; i++)
    {
        if(a[u].weight < a[i].weight && a[u].iq > a[i].iq){
            x = call(i);
            if(x > mx)
            {
                mx = x;
                dir[u] = i;
            }
        }
    }
    mx++;
    dp[u] = mx;
    return dp[u];
}


void call_find(int u)
{
    if(dir[u] == -1)
        return;
    else
    {
        printf("%d\n",a[dir[u]].ind + 1);
        call_find(dir[u]);
    }
}



int main()
{
    int j=0,x,y;
    while(scanf("%d%d",&x,&y) == 2)
    {
        a[j].weight = x;
        a[j].iq = y;
        a[j].ind = j;
        j++;
    }
    n = j;

    sort(a,a+j,cmp);

    int i,ans=0,mx=-1,mxInd;

    memset(dp,-1,sizeof(dp));
    memset(dir,-1,sizeof(dir));

    for(i=0; i<n; i++)
    {
        ans = call(i);
        if(ans > mx)
        {
            mx = ans;
            mxInd = i;
        }
    }

    //cout<<dir[mxInd]<<endl;
    printf("%d\n%d\n",mx,a[mxInd].ind+1);

    call_find(mxInd);

    return 0;

}
