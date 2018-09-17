#include<bits/stdc++.h>
using namespace std;
int check(string str,int n,int m)
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
    string str;

    while(getline(cin,str))
    {
        int i,j,l,cnt=0,flag=0,x;
        int a[130]={0};
        map<string , int> mymap;
        map<string , int>:: iterator it;



        l=str.size();

        for(i=0; i<l; i++)
        {
            if(a[str[i]]==0)
            {
                a[str[i]]=1;
                cnt++;
            }
        }

        for(i=0; i<l; i++)
        {
            string str1;
            str1+=str[i];
            for(j=i+1; j<l; j++)
            {
                str1+=str[j];
                flag=check(str,i,j);
                if(flag==1)
                {
                    mymap[str1]=mymap[str1]+1;
                    cnt++;
                }
            }
        }

        for(it=mymap.begin() ; it!=mymap.end(); it++)
        {
            x=it->second;
            if(x>1)
            {
                x=x-1;
                cnt=cnt-x;
            }
        }


        cout<<"The string '"<<str<<"' contains "<<cnt<<" palindromes.\n";

    }
    return 0;
}

