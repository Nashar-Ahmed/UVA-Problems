#include<bits/stdc++.h>
using namespace std;

int palimdom(char str[])
{
    int flag=0,i,j;

    if(str[0]=='0' && str[1]=='0' && str[3]=='0' && str[4]=='0')
        flag=1;
    else if(str[0]=='0' && str[1]=='0' && str[3]=='0' && str[4]!='0')
        flag=1;
    else if(str[0]=='0' && str[1]=='0' && str[3]==str[4])
        flag=1;
    else if(str[0]=='0' && str[1]==str[4])
        flag=1;
    else if(str[0]!='0')
    {
        if(str[0]==str[4] && str[1]==str[3])
            flag=1;
    }

    return flag;

}

int main()
{
    int tst;
    cin>>tst;

    while(tst--)
    {
        int h,m,cnt=0,y=1;
        char ch;
        char str[5];
        scanf("%d%c%d",&h,&ch,&m);
        getchar();

        while(cnt==0)
        {
            int i,j,x,r,t;

            m++;
            x=m%60;
            if(m%60==0)
            {
                h=h+y;
            }
            h=h%24;

            if(h==0)
            {
                str[0]='0';
                str[1]='0';
            }
            else if(h<10)
            {
                str[0]='0';
                str[1]=h+48;
            }
            else if(h>9)
            {
                r=h;
                t=r%10;
                str[1]=t+48;
                r=r/10;
                t=r%10;
                str[0]=t+48;
            }

            str[2]=':';
            if(x==0)
            {
                str[3]='0';
                str[4]='0';
            }
            else if(x<10)
            {
                str[3]='0';
                str[4]=x+48;
            }
            else if(x>9)
            {
                r=x;
                t=r%10;
                str[4]=t+48;
                r=r/10;
                t=r%10;
                str[3]=t+48;
            }
           cnt=palimdom(str);

        }
        for(int i=0; i<5; i++)
            cout<<str[i];
        cout<<endl;
    }
    return 0;
}
