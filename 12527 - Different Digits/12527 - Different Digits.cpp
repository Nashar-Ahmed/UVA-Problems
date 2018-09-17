#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
    int i,r,x,flag=0;
    int a[10]={0};

    x=n;
    flag=1;
    while(x>0)
    {
        r=x%10;
        if(a[r]==0)
            a[r]=1;
        else if(a[r]!=0)
        {
            flag=0;
            break;
        }
        x=x/10;
    }
    return flag;
}

int main()
{
    int m,n;
    while(cin>>n>>m)
    {
        int i,flag=0,cnt=0;
        for(i=n ;i<=m; i++)
        {
            flag=check(i);
            if(flag==1)
                cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
