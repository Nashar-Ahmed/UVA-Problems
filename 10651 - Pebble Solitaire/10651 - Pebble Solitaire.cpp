#include<bits/stdc++.h>
using namespace std;


int dp[1<<12 + 2];

int mask = 0;
int set_mask(int n,int pos)
{
    return (n | (1<<pos));
}
bool check(int n,int pos)
{
    return (bool)(n & (1 << pos));
}
int reset(int n,int pos)
{
    int x,y;
    x = 1 << pos;
    x = ~x;
    n = n & x;
    return n;
}


int call(int mask)
{
    if(mask == (1 << 12) - 1)
        return 0;

    int i,flag = 0,x,y;
    for(i=0; i<11; i++)
    {
        x = check(mask,i);
        y = check(mask,i+1);
        if(x==y && x==1)
            flag = 1;
    }
    if(flag == 0)
        return 0;

    if(dp[mask] != -1)
        return dp[mask];

    int res1=0,res2=0,ans=0,mx=0;
    for(i=0; i<12; i++)
    {
        if(check(mask,i) == 1)
        {
            if(i>0 && i<11)
            {
                if(check(mask,i-1)==0 && check(mask,i+1)==1)
                {
                    mask = set_mask(mask,i-1);
                    mask = reset(mask,i);
                    mask = reset(mask,i+1);

                    res1 = 1 + call(mask);
                    mask = reset(mask,i-1);
                    mask = set_mask(mask,i);
                    mask = set_mask(mask,i+1);
                }
                if(check(mask,i-1) == 1 && check(mask,i+1) ==0)
                {
                    mask = set_mask(mask,i+1);
                    mask = reset(mask,i);
                    mask = reset(mask,i-1);

                    res2 = 1 + call(mask);
                    mask = reset(mask,i+1);
                    mask = set_mask(mask,i);
                    mask = set_mask(mask,i-1);
                }
                mx = max(res1,res2);
                if(mx > ans)
                   ans = mx;

            }
        }
    }
    dp[mask] = ans;
    return dp[mask];

}










int main()
{
    int test;

    cin>>test;
    while(test--)
    {
        int i,j,x,y,cnt=0,ans=0;
        int l;
        string str;
        mask = 0;
        memset(dp,-1,sizeof(dp));
        cin>>str;
        for(i=0; i<12; i++)
        {
            if(str[i] == 'o'){
                mask = set_mask(mask,i);
                cnt++;
            }
        }

        ans = call(mask);
        ans = cnt - ans;

        cout<<ans<<endl;
    }
    return 0;
}
