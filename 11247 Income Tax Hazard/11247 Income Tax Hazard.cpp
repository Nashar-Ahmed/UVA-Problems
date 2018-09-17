#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double m,x;
    while(cin>>m>>x)
    {
        if(m==0 && x==0)
            break;

        int i,j,flag=0;
        long double ans,ebalance,balance,nbalance,tax;
        ebalance = m-1;
        for(i=m;  ; i++)
        {
            if(x==0 || x==100)
            {
                flag=1;
                break;
            }
            tax=(i*x)/100.0;
            balance=i-tax;
            nbalance=ceil(balance);
            if(nbalance>ebalance)
            {
                i--;
                break;
            }
        }
        if(flag==1)
            cout<<"Not found\n";
        else
        cout<<i<<endl;
    }
    return 0;
}
