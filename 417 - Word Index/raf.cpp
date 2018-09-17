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
        for(j=0; j<1; i++)
        {
            str[i][j]=a;
            str[i][j+1]=b;
            str[i][j+2]=c;
            str[i][j+3]='\0';
        }
        cout<<i;
        if(a=='x' && b=='y' && c=='z')
            break;
        if(b=='z')
        {
            a++;
            b=a+1;
            c=b+1;
        }
        if(c=='z')
        {
            b++;
            c=b;
        }
        c++;
        cout<<i;
    }

    k=i;
    for(i=0; i<=k; i++)
        cout<<str[i]<<"  ";

}
