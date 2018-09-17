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
    sieve();
    string str;
    int i,j=0;
    int a[100];

    for(i=0; i<26; i++)
        a[i]=i+97;
    for(i=26; i<52; i++)
    {
        a[i]=j+65;
        j++;
    }

    while(cin>>str)
    {
        int i,j=0,z=0,c,sum=0;

        for(i=0; i<str.size(); i++)
            for(j=0; j<52; j++)
                if(str[i]==a[j])
                {
                    sum=sum+(j+1);
                    break;
                }

        if(s[sum]==0)
            cout<<"It is a prime word."<<endl;
        else
            cout<<"It is not a prime word."<<endl;
    }

    return 0;
}
