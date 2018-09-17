#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    while(getline(cin,str))
    {
        if(str=="DONE")
            break;

        int i,j=0,l,n,flag=0;
        char s[1000000];


        l=str.size();
        for(i=0; i<l; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
                s[j++]=str[i]+32;
            else if(str[i]>='a' && str[i]<='z')
                s[j++]=str[i];

        }
        s[j]='\0';

        n=j-1;
        flag=1;
        for(i=0; i<j; i++)
        {
            if(s[i]!=s[n])
            {
                flag=0;
                break;
            }
            n--;
        }




      if(flag==1)
        cout<<"You won't be eaten!\n";
      else
        cout<<"Uh oh..\n";


    }
    return 0;
}
