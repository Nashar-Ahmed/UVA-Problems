#include<bits/stdc++.h>
#define m 1000000
using namespace std;

bool s[m];

void sieve(void)
{
    int i,j;
    for(i=4; i<m; i+=2)
         s[i]=1;
    for(i=3; i<=sqrt(m); i++)
    {
        if(s[i]==0)
        {
            for(j=i*i; j<m; j+=2*i)
                s[j]=1;
        }
    }
}

int main()
{
    int i,j,x,sum=0;
    int a[30]={0};
    string str;

    i='z';
    cout<<i<<endl;

    for(i=0; i<26; i++)
    {
        a[i]=i+65;
    }

    cin>>str;

    //for(i=0; i<26; i++)
        //cout<<a[i]<<" ";
    for(i=0; i<str.size(); i++)
        for(j=0; j<26; j++)
            if(str[i]==a[j])
                sum=sum+(j+1);

    cout<<sum;
}
