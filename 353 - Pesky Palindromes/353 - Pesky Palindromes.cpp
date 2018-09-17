#include<bits/stdc++.h>
using namespace std;
int check(char str[],int n,int m)
{
    int i,j,flag=0;
    flag=1;
    j=m;
    for(i=n; i<=m; i++)
    {
        if(str[i]!=str[j])
        {
            flag=0;
            break;
        }
        j--;
    }

    return flag;
}


int main()
{
    char str[100];

    while(gets(str))
    {
        int i,j,l,cnt=0,flag=0;
        int a[130]={0};
        l=strlen(str);

        for(i=0; i<l; i++)
        {
            if(a[str[i]]==0)
            {
                a[str[i]]=1;
                cnt++;
            }
        }

        for(i=0; i<l; i++)
            for(j=i+1; j<l; j++)
            {
                flag=check(str,i,j);
                if(flag==1)
                    cnt++;
            }

        cout<<cnt<<endl;
    }
    return 0;
}
