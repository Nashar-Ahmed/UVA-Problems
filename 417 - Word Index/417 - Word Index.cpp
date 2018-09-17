#include<bits/stdc++.h>
using namespace std;
char str[90000][10];
int main()
{
    int i,j,a,b,c,d,e,x,k;

    x=97;
    for(i=0; i<26; i++)
        for(j=0; j<1; j++)
        {
            str[i][j]=x;
            str[i][j+1]='\0';
            x++;
        }


    k=i;
    a=97; b=a+1;
    for(i=k;  ;i++)
    {
        for(j=0; j<1; j++)
        {
            str[i][j]=a;
            str[i][j+1]=b;
            str[i][j+2]='\0';
        }
        if(a=='y' && b=='z')
            break;
        if(b=='z')
        {
            a++;
            b=a;
        }
        b++;
    }

    k=i;
    a=97; b=a+1; c=b+1;
    for(i=k;   ;i++)
    {
        for(j=0; j<1; j++)
        {
            str[i][j]=a;
            str[i][j+1]=b;
            str[i][j+2]=c;
            str[i][j+3]='\0';
        }
        if(a=='x')
            break;

        if(b=='y')
        {
            a++;
            b=a+1;
            c=a+1;
        }
        if(c=='z' )
        {
            b++;
            c=b;
        }
        c++;
    }


    k=i;
    a=97; b=a+1; c=b+1; d=c+1;
    for(i=k;   ; i++)
    {
        for(j=0; j<1; j++)
        {
            str[i][j]=a;
            str[i][j+1]=b;
            str[i][j+2]=c;
            str[i][j+3]=d;
            str[i][j+4]='\0';
        }
        if(a=='w')
            break;
        if(b=='x')
        {
            a++;
            b=a+1;
            c=a+2;
            d=a+2;
        }
        if(c=='y')
        {
            b++;
            c=b+1;
            d=b+1;
        }
        if(d=='z')
        {
            c++;
            d=c;
        }
        d++;
    }

    k=i;
    for(i=0; i<=k; i++)
        cout<<str[i]<<" ";



}
