#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();

    while(t--)
    {
        double c=12.01,h=1.008,o=16.00,n=14.01;
        int l;
        double sum=0,r,x,y;
        int i,j;

        string str;

        cin>>str;
        l=str.size();

        for(i=0; i<l; i++)
        {
            r=1;
            if(str[i]=='C')
            {
                if(l>(i+1) && isdigit(str[i+1])){
                    r=str[i+1]-48;
                if(l>(i+2) && isdigit(str[i+2]))
                    r=r*10 + (str[i+2]-48);
                }
                sum=sum + r*c;

            }

            if(str[i]=='H')
            {
                if(l>(i+1) && isdigit(str[i+1])){
                    r=str[i+1]-48;
                if(l>(i+2) && isdigit(str[i+2]))
                    r=r*10 + (str[i+2]-48);
                }
                sum=sum + r*h;
            }

            if(str[i]=='O')
            {
                if(l>(i+1) && isdigit(str[i+1])){
                    r=str[i+1]-48;
                if(l>(i+2) && isdigit(str[i+2]))
                    r=r*10 + (str[i+2]-48);
                }
                sum=sum + r*o;

            }

            if(str[i]=='N')
            {
                if(l>(i+1) && isdigit(str[i+1])){
                    r=str[i+1]-48;
                if(l>(i+2) && isdigit(str[i+2]))
                    r=r*10 + (str[i+2]-48);
                }
                sum=sum + r*n;
            }


        }
        printf("%.3lf\n",sum);


    }

    return 0;
}
