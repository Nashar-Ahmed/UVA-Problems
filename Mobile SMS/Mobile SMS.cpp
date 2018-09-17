#include<bits/stdc++.h>
using namespace std;

int main()
{

    char a2[3]={'a','b','c'},
             a3[3]={'d','e','f'},
             a4[3]={'g','h','i'},
             a5[3]={'j','k','l'},
             a6[3]={'m','n','o'},
             a7[4]={'p','q','r','s'},
             a8[3]={'t','u','v'},
             a9[4]={'w','x','y','z'},
             a1[4]={'.',',','?','"'};

    int t;
    cin>>t;
    while(t--)
    {
        char str[1000];
        int l,i,j=0,n,m,cnt=0,x,y,k;
        int c1[110];
        int c2[110];

        cin>>l;
        for(i=0; i<l; i++)
            cin>>c1[i];
        for(i=0; i<l; i++)
            cin>>c2[i];

        for(i=0; i<l; i++)
        {
            x=c1[i];
            y=c2[i];

            if(x==2)
                str[j++]=a2[y-1];
            else if(x==3)
                str[j++]=a3[y-1];
            else if(x==4)
                str[j++]=a4[y-1];
            else if(x==5)
                str[j++]=a5[y-1];
            else if(x==6)
                str[j++]=a6[y-1];
            else if(x==7)
                str[j++]=a7[y-1];
            else if(x==8)
                str[j++]=a8[y-1];
            else if(x==9)
                str[j++]=a9[y-1];
            else if(x==1)
                str[j++]=a1[y-1];
            else if(x==0)
            {
                for(k=0; k<y; k++)
                    str[j++]=' ';
            }
        }

        str[j]='\0';

        cout<<str<<endl;

    }

    return 0;

}
