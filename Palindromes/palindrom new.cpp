#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while(cin>>str)
    {
        int i,j,n,l,x,y,cnt=0;
        int a[130]={0};
        int flag1=0,flag2=0;
        string str1,str2;

        a['A']='A';
        a['E']='3';
        a['H']='H';
        a['I']='I';
        a['J']='L';
        a['L']='J';
        a['M']='M';
        a['o']='o';
        a['S']='2';
        a['T']='T';
        a['U']='U';
        a['V']='V';
        a['W']='W';
        a['X']='X';
        a['Y']='Y';
        a['Z']='5';
        a['1']='1';
        a['2']='S';
        a['3']='E';
        a['5']='Z';
        a['8']='8';

        l=str.size();

        x=l-1;
        flag1=1;
        for(i=0; i<l; i++)
        {
            if(str[i]!=str[x])
            {
                flag1=0;
                break;
            }
            x--;
        }

        str1=str;

        for(i=0; i<l; i++)
        {
            if(a[str1[i]]!=0)
            {
                cnt++;
                str1[i]=a[str1[i]];
            }
        }

        flag2=1;
        if(cnt==l)
        {
           x=l-1;
           for(i=0; i<l; i++)
           {
               if(str1[i]!=str[x])
               {
                   flag2=0;
                   break;
               }
               x--;
           }
        }
        else
            flag2=0;

        if(flag1==1 && flag2==1)
            cout<<str<<" -- is a mirrored palindrome.\n";
        else if(flag1==0 && flag2==0)
            cout<<str<<" -- is not a palindrome.\n";
        else if(flag1==1 && flag2==0)
            cout<<str<<" -- is a regular palindrome.\n";
        else if(flag1==0 && flag2==1)
            cout<<str<<" -- is a mirrored palindrome.\n";

        cout<<endl;



    }

    return 0;
}
