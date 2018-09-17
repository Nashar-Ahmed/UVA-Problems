#include<bits/stdc++.h>
using namespace std;

int reversecheck(char str[],long long l,long long k)
{
    long long i,x,y;
    int flag=0;

    x=l-1;
    flag=1;

    for(i=0; i<l; i++)
    {
        if(str[i]!=str[x])
        {
            flag=0;
            break;
        }
        x--;
    }

    return flag;
}


int leftcheck(char str[],long long l,long long k)
{
    long long i,j,m=0;
    int flag=0;
    char s[l+10];

    for(i=0; i<k; i++)
        for(j=i; j<l; j=j+k)
           s[m++]=str[j];

    flag=1;
    for(i=0; i<l; i++)
    {
        if(str[i]!=s[i])
        {
            flag=0;
            break;
        }
    }

    return flag;
}

int rightcheck(char str[],long long l,long long k)
{
    long long i,j,m=0,x,y;
    int flag=0;
    char s[l];

    x=l-1;
    y=l-k;
    for(i=x; i>=y; i--)
        for(j=i; j>=0; j=j-k)
            s[m++]=str[j];

    flag=1;


    for(i=0; i<l; i++)
    {
        if(str[i]!=s[i])
        {
            flag=0;
            break;
        }
    }

    return flag;
}


int main()
{
    int tst,c=0;
    cin>>tst;
    getchar();

    while(tst--)
    {
        c++;

        long long i,j=0,k,m,cnt=0,a,b,l;
        int flag=0;
        string str;
        char s[1000000];

        getline(cin,str);
        l=str.size();

        for(i=0; i<l; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
                s[j++]=str[i]+32;
            else if(str[i]>='a' && str[i]<='z')
                s[j++]=str[i];
        }
        s[j]='\0';

        a=floor(sqrt(j));
        b=ceil(sqrt(j));
        flag=0;
        if(a==b)
        {
            flag=1;
            k=a;
        }

        if(flag==1){
            flag=reversecheck(s,j,k);
        }
        if(flag==1){
            flag=rightcheck(s,j,k);
        }
        if(flag==1){
            flag=leftcheck(s,j,k);
        }


        if(flag==1)
        {
            printf("Case #%d:\n%lld\n",c,k);
        }
        else
        {
            printf("Case #%d:\n",c);
            cout<<"No magic :(\n";
        }

    }
    return 0;

}
