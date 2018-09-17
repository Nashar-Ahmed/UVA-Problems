#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x));
using namespace std;

int n;
int make;


int coine[5]={50,25,10,5,1};
int dp[5][9999];

long long f(int i,long long amount)
{
    if(i>=5)
    {
        if(amount == make)
            return 1;
        else
            return 0;
    }


    if(dp[i][amount]!=-1)
        return dp[i][amount];

    int result1=0,result2=0;
    if(amount+coine[i] <= make)
        result1 = f(i,amount+coine[i]);

    result2 = f(i+1,amount);

    dp[i][amount] = result1 + result2;
    return dp[i][amount];
}


int main()
{
    while(cin>>make)
    {
        mem(dp,-1);
        cout<<f(0,0)<<endl;
    }

    return 0;
}
