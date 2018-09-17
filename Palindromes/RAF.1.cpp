#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[21]={'A','3','H','I','J','L','M','O','T','U','V','W','X','Y','5','1','S','E','Z','8','\0'};
    string str;
    char c;

    int i,j;
    int a[200]={0};
    a[69]=51;
    a[51]=69;
    a[74]=76;
    a[76]=74;
    a[83]=50;
    a[50]=83;
    a[90]=53;
    a[53]=90;

    for(i=0; i<100; i++)
    {
        c=a[i];
        cout<<c<<"\n";
    }
}
