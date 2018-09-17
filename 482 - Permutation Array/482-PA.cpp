#include<bits/stdc++.h>
#define mx 100000
using namespace std;

int main()
{
    int tst,cnt=0;
    cin>>tst;
    getchar();

    while(tst--)
    {
        char str[mx];
        int index[mx]={0};
        double value[mx]={0.0},m;
        int i,j=0,l,n,x,y;
        string str1[mx];

        getchar();
        gets(str);


        l=strlen(str);
        for(i=0; i<l; i++)
        {
            if(str[i]!=' ')
            {
                x=str[i]-48;
                while(str[i+1]!=' ' && (i+1)<l)
                {
                    y=str[i+1]-48;
                    x=x*10 + y;
                    i++;
                }

                index[j++]=x;
            }
        }

       for(i=0; i<j; i++)
       {
           cin>>str1[index[i]];
       }

       sort(index,index+mx);

       if(cnt>0)
          cout<<endl;
       cnt++;


       getchar();
       for(i=mx-j; i<mx; i++)
       {
           cout<<str1[index[i]]<<endl;
       }

    }

    return 0;
}
