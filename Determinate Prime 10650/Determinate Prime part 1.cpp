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
    int i,j=0;
    int a[32222];
    for(i=2; i<=32222; i++)
        if(s[i]==0)
           a[j++]=i;

    int u,l;
    while(cin>>l>>u)
    {
        if(l==0 && u==0)
            break;
        if(l>u)
            swap(l,u);

        int i,j=0,k,cnt=0,flag=0,x,y;


        for(i=0; a[i]<=u; i++)
        {
            if(a[i]>=l)
            {
                x=a[i+1]-a[i];
                j=i;
                cnt=0;
                while(x==(a[i+1] - a[i]) && a[i+1]<=u)
                {
                    cnt++;
                    i++;
                }



                if(cnt>=2)
                {
                    y=j+cnt;
                    for(k=j; k<=y; k++)
                        cout<<a[k]<" ";
                    cout<<endl;
                }
            }
        }






    }



}
