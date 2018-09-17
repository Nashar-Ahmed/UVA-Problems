#include<bits/stdc++.h>
#define m 100000
using namespace std;

bool s[m];

void sieve(void)
{
    int i,j;
    s[0]=1;
    s[1]=1;
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
    int t,c=1;
    cin>>t;

    while(t--)
    {
        int a[200]={0};
        int i,j,cnt=0,r,l;
        char ch;
        string str;

        cin>>str;
        l=str.size();

        for(i=0; i<l; i++)
            a[str[i]]++;

        printf("Case %d: ",c);
        for(i=0; i<200; i++)
        {
             if(s[a[i]]==0)
             {
                 ch=i;
                 cout<<ch;
                 cnt=1;
             }
        }
        if(cnt==0)
            cout<<"empty";
        cout<<endl;
        c++;
    }
    return 0;
}
