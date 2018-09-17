#include<bits/stdc++.h>
using namespace std;

int coin[] = {50,25,10,5,1};
int make;
int dp[7][7495];

int call(int i,int amount)
{
    if(i>=5)
    {
        if(amount == 0)
            return 1;
        else
            return 0;
    }

    if(dp[i][amount] != -1)
        return dp[i][amount];

    int res1=0,res2=0;
    if(amount-coin[i] >=0)
        res1 = call(i , amount-coin[i]);
    res2 = call(i+1 , amount);

    dp[i][amount] = res1 + res2;
    return dp[i][amount];
}


int main()
{
    int i,j,n;

    memset(dp,-1,sizeof(dp));
    while(cin>>make)
    {
        n = call(0,make);
        cout<<n<<endl;
    }
    return 0;
}



