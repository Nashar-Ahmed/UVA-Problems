#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1;
    while(1)
    {
        cin>>str1;
        getchar();


        int i,j=0,n,l,m,x,y,z;
        string str2;
        l=str1.size();
        for(i=0; i<l; i++)
        {
            if(str1[i]=='[')
            {
                while(str1[i+1]!=']' && (i+1)<l)
                {
                    str2[j++]=str1[i+1];
                    str1[i+1]='\0';
                    i++;
                }
            }
        }

        for(i=0; i<l; i++)
        {
            if(str1[i]=='\0');
            else
                str2[j++]=str1[i];
        }

        for(i=0; i<j; i++)
            cout<<str2[i];
        getchar();

    }
}

