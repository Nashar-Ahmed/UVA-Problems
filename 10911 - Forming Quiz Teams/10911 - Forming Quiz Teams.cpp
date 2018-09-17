#include<bits/stdc++.h>
using namespace std;

int n;
double dp[65555];
double x[20],y[20];

int Set(int n,int pos)
{
    return n=(n | (1<<pos));
}
int reset(int n,int pos)
{
    return n=(n &(~(1<<pos)));
}
bool check(int n,int pos)
{
    return (bool)(n&(1<<pos));
}


double call(int mask)
{
    if(mask == ((1<<n)-1)){
        return 0.0;
    }
    if(dp[mask] != -1.0){
        return dp[mask];
    }

    int i,j;
    double res,ans=INFINITY,dis;

    for(i=0; i<n; i++)
    {
        if(check(mask,i) == 0)
        {
            mask = Set(mask,i);
            for(j=0; j<n; j++)
            {
                if(check(mask,j) == 0)
                {
                    mask = Set(mask,j);
                    dis = (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);
                    dis = sqrt(dis);

                    res = dis + call(mask);
                    ans = min(ans,res);
                    mask = reset(mask,j);
                }
            }
            mask = reset(mask,i);
        }
    }
    dp[mask] = ans;
    return dp[mask];
}



int main()
{
    int m,C=0;

    while(cin>>m && m!=0)
    {
        n = 2*m;
        string str;
        int i,j;
        double ans=0,res;

        for(i=0; i<n; i++)
        {
            cin>>str;
            scanf("%lf%lf",&x[i],&y[i]);
        }
        for(i=0; i<65555; i++)
            dp[i] = -1.0;



        ans = call(0);

        printf("Case %d: %.2lf\n",++C,ans);
    }
    return 0;
}
