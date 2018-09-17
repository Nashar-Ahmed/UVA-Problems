#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[16];
    str[0]="Happy",
    str[1]="birthday",
    str[2]="to",
    str[3]="you",
    str[4]="Happy",
    str[5]="birthday",
    str[6]="to",
    str[7]="you",
    str[8]="Happy",
    str[9]="birthday",
    str[10]="to",
    str[11]="Rujia",
    str[12]="Happy",
    str[13]="birthday",
    str[14]="to",
    str[15]="you";



    int n,i,j,x,y;
    string str2[110];
    cin>>n;
    getchar();

    for(i=0; i<n; i++)
        cin>>str2[i];


    if(n<=16)
    {
        for(i=0; i<16; i++)
        {
            x=i%n;
            cout<<str2[x]<<": "<<str[i]<<endl;
        }
    }
    else if(n>16)
    {
        if(n%16==0)
        {
            for(i=0; i<n; i++)
            {
                x=n%16;
                cout<<str2[i]<<": "<<str[x]<<endl;
            }
        }
        else if(n%16!=0)
        {
            y=n/16;
            j=(y+1)*16;
            cout<<j<<endl;
            for(i=0; i<j; i++)
            {
                x=i%16;
                y=i%n;
                cout<<str2[y]<<": "<<str[x]<<endl;
            }
        }
    }
    return 0;
}
