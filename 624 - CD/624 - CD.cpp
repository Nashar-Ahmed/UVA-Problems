#include<bits/stdc++.h>
using namespace std;

int cap,n;
int dp[1005][1005];
int cost[1000];
int dir[1005][1005];

map<int,int> mymap;
map<int,int> :: iterator it;
vector<int> v;

int call(int i,int w)
{
    if(i == n)
        return 0;
    if(dp[i][w] != -1)
        return dp[i][w];

    int profit1=0,profit2=0;

    if(w+cost[i] <= cap)
        profit1 = cost[i] + call(i+1, w+cost[i]);

    profit2 = call(i+1,w);

    if(profit1 > profit2)
    {
        dp[i][w] = profit1;
        dir[i][w] = 1;
    }
    else
    {
        dp[i][w] = profit2;
        dir[i][w] = 2;
    }
    return dp[i][w];
}

void direction(int i,int w)
{
    if(dir[i][w] == -1)
        return;

    if(dir[i][w] == 1)
    {
        v.push_back(cost[i]);
        direction(i+1, w+cost[i]);
    }
    else
        direction(i+1, w);
}

bool cmp(int a,int b)
{
    if(a>b)
        return 1;
    else
        return 0;
}


int main()
{
    while(scanf("%d",&cap) == 1)
    {
        scanf("%d",&n);

        int i,j,x,y,ans = 0;
        int a[50]={0};
        int temp[50];

        map<int,int> mymap;
        map<int,int> :: iterator it;

        for(i=0; i<n; i++){
            scanf("%d",&cost[i]);
            temp[i] = cost[i];
        }

        sort(cost,cost+n,cmp);

        memset(dp,-1,sizeof(dp));
        memset(dir,-1,sizeof(dir));

        ans = call(0,0);
        if(ans == 0)
        {
            printf("0 sum:0\n");
        }
        else
        {
            direction(0,0);
            for(i=0; i<v.size(); i++)
                for(j=0; j<n; j++)
                {
                    if(v[i] == temp[j] && a[j]==0)
                        a[j] = v[i];
                }

            for(i=0; i<50; i++)
                if(a[i] != 0)
                   printf("%d ",a[i]);


            printf("sum:%d\n",ans);
        }


        v.clear();
        mymap.clear();
    }
    return 0;
}

