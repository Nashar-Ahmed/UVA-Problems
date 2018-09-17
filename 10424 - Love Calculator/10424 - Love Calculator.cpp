#include<bits/stdc++.h>
using namespace std;
int a[130];


int call(string str)
{
    int i,l,sum=0,n,x;
    l=str.size();

    for(i=0; i<l; i++)
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            sum=sum + a[str[i]];

    while(1)
    {
        if(sum<10)
            break;

        n=sum;
        sum=0;
        while(n>0)
        {
            x=n%10;
            sum=sum+x;
            n=n/10;
        }
    }
    return sum;
}


int main()
{
    int i,j=1;
    for(i='A' ;i<='Z'; i++)
    {
        a[i]=j;
        j++;
    }

    j=1;
    for(i='a'; i<='z'; i++)
    {
        a[i]=j;
        j++;
    }

    string str1,str2;
    while(getline(cin,str1))
    {
        getline(cin,str2);


        double r,x,y;

        x=call(str1);
        y=call(str2);

        if(x<=y)
            r=(x*100)/y;
        else if(x>y)
            r=(y*100)/x;

        printf("%.2lf",r);
        cout<<" %\n";
    }
    return 0;
}
