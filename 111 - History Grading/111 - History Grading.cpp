#include<bits/stdc++.h>
using namespace std;

string str1,str2,str3;
int a[25];
int ans[1000006];
int dp[25][25];



int call(int i,int j)
{
    if(i>=str1.size() || j>=str2.size())
        return 0;
    if(dp[i][j] != -1)
        return dp[i][j];

    int ans=0,res1=0,res2=0;

    if(str1[i] == str2[j])
    {
        ans = 1 + call(i+1, j+1);
    }
    else
    {
        res1 = call(i+1, j);
        res2 = call(i, j+1);
        ans = max(res1, res2);
    }

    dp[i][j] = ans;
    return ans;
}


int main()
{
    int n;
    char ch;

    cin>>n;
    getchar();
    getline(cin,str1);
    for(int i=0; i<str1.size(); i++)
        if(str1[i] != ' ')
           str3+=str1[i];
    str1 = str3;
    str3.clear();


    while(getline(cin,str2))
    {
        int i,j,x,y,z,ans=0;

        for(i=0; i<str2.size(); i++)
            if(str2[i] != ' ')
                str3+=str2[i];
        str2 = str3;
        memset(dp,-1,sizeof(dp));
        ans = call(0,0);
        cout<<ans<<endl;
        str3.clear();
    }

    return 0;

}
