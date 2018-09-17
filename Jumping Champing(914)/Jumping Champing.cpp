#include<iostream>
#include<cmath>
#include<algorithm>
#define m 1000010

using namespace std;

bool bool_prime[m];
int prime[m];
int diff[121];
void sieve()
{
    int i,j;
    for(i=4; i<m; i+=2)
        bool_prime[i]=1;
    for(i=3; i<sqrt(m); i+=2)
    {
        if(bool_prime[i]==0)
        {
            for(j=i*i; j<m; j+=2*i)
                bool_prime[j]=1;
        }
    }
}

int main()
{
    long int i,j=1,n,l,u,c=0,t,x=1,array_index=0,tmp=0;
    sieve();

    cin>>n;
    while(n--)
    {
        cin>>l>>u;
        if(l>u)
        {
            tmp=u;
            u=l;
            l=tmp;
        }
        if(l<2)
            l=2;


        c=0;x=0;j=1,array_index=0;

        for(i=l; i<=u; i++)
        {
            if(bool_prime[i]==0)
            {
                prime[j++]=i;
                c++;
            }
        }

        for(i=1; i<c; i++)
        {
            t=prime[i+1]-prime[i];
            diff[t]=diff[t]+1;
        }

        for(i=1; i<121; i++)
        {
            if(diff[i]>x)
            {
                x=diff[i];
                array_index=i;
            }
        }

        if(x>1)
            sort(diff,diff+121);
        if(x>1&&(diff[120]-diff[119]!=0))
            cout<<"The jumping champion is "<<array_index<<endl;
        else
            cout<<"No jumping champion\n";

        for(i=0; i<121; i++)
            diff[i]=0;

    }

    return 0;
}
