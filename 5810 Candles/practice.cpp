#include<bits/stdc++.h>
using namespace std;

vector<int> vup[105];
vector<int> vdown[105];


int check_valid(int n1,int n2)
{
    int i,j,x,y,flag1=0,flag=0;
    int a[20] = {0};

    if(n2 == -1)
    {
        int r,m;
        flag = 1;
        while(n1 > 0)
        {
            r = n1%10;
            if(a[r]==0)
                a[r] = 1;
            else
                return 0;
            n1/=10;
        }
        return flag;
    }
    else
    {
        int r,m;
        flag = 0;
        while(n1 > 0)
        {
            r = n1%10;
            if(a[r] == 0)
                a[r] = 1;
            else
                return 0;
            n1/=10;
        }
        while(n2 > 0)
        {
            r = n2%10;
            if(a[r] == 0)
                a[r] = 1;
            else
                return 0;
            n2/=10;
        }
        return 1;
    }
}

void call_creat()
{
    int i,j,x,y,cny=0,flag=0;


    for(i=1; i<=102; i++)
    {
        for(j=1; j<=(i/2); j++)
        {
            flag = check_valid(j,i-j);
            if(flag == 1)
            {
                vup[i].push_back(i-j);
                vdown[i].push_back(j);
            }
        }
        flag = check_valid(i,-1);
        if(flag == 1)
        {
            vup[i].push_back(i);
            vdown[i].push_back(-1);
        }
    }
}














int main()
{
    int i,j,x,y;
    call_creat();
    for(i=1; i<=12; i++)
    {
        x = vup[i].size();
        for(j=0; j<x; j++)
        {
            cout<<vup[i][j]<<" "<<vdown[i][j]<<endl;
        }
        cout<<"................"<<endl;
    }
}
