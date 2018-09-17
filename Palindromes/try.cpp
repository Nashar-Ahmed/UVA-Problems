#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    int a[200]={0};
    char s[22]={'A','3','H','I','J','L','M','O','2','T','U','V','W','X','Y','5','1','S','E','Z','8','\0'};

    a[69]=51;
    a[51]=69;
    a[74]=76;
    a[76]=74;
    a[83]=50;
    a[50]=83;
    a[90]=53;
    a[53]=90;

    while(cin>>str1)
    {
        int i,j,l,x,c1=1,c2=1,c3=1;
        string str2;

        str2=str1;
        l=str1.size();
        j=l-1;

        //for 1st//
        for(i=0; i<l; i++)
        {

            if(str1[i]==str2[j])
            {
                j--;
                continue;
            }
            else
            {
                c1=0;
                break;
            }

        }

        //for is possible//
        for(i=0; i<l; i++)
        {
            c2=0;
            for(j=0; j<21; j++)
            {
                if(str1[i]==s[j])
                {
                    c2=1;
                    break;
                }
            }
            if(c2==0)
                break;
        }

        //if possible then c2=1//
        if(c2==1)
        {

            j=l-1;
            for(i=0; i<l; i++)
            {
                if(str1[i]==str2[j])
                    j--;
                else
                {
                    if(str1[i]==a[str2[j]])
                        j--;
                    else
                    {
                        c3=0;
                        break;
                    }
                }
            }
        }

        else
            c3=0;

        if(c1==1 && c3==1)
            cout<<str1<<" -- is a mirrored palindrome.\n";
        if(c1==1 && c3==0)
            cout<<str1<<"-- is a regular palindrome.\n";
        if(c1==0 && c3==1)
            cout<<str1<<" -- is a mirrored string.\n";
        if(c1==0 && c3==0)
            cout<<str1<<" -- is not a palindrome.\n";

        cout<<endl;

    }
    return 0;
}
