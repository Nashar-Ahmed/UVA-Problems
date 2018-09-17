#include<bits/stdc++.h>
using namespace std;

int check(string str1,string str2)
{
    int i,j,n,flag=0;
    if(str1.size()<=str2.size())
        n=str1.size();
    else
        n=str2.size();

    flag=1;
    for(i=0; i<n; i++)
    {
        if(str1[i]!=str2[i])
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int main()
{
    int tst;
    cin>>tst;

    while(tst--)
    {
        string str[10010];
        int i,j,n,l,flag=0,flag1=0;

        cin>>n;

        for(i=0; i<n; i++)
            cin>>str[i];

        sort(str,str+n);
        flag=1;
        for(i=0; i<n-1; i++)
        {
            flag1=check(str[i],str[i+1]);
            if(flag1==1)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
