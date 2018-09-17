#include<bits/stdc++.h>
using namespace std;
#define mx 600000
int card[mx];


void creat(void)
{
    long long i,j=1,x,z,cnt=0,n;
    card[j++]=1;

    cnt=1;
    z=pow(2,cnt);

    x=2;
    for(i=x; i<=z; i+=2)
    {
        card[j++]=i;
        if(j>500100)
            break;
        if(i==z)
        {
            cnt++;
            z=pow(2,cnt);
            i=0;
        }
    }
}





int main()
{
    long long int n;
    creat();

    while(cin>>n && n!=0)
    {
        cout<<card[n]<<endl;
    }


}
