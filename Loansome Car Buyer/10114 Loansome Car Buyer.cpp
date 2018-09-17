#include<bits/stdc++.h>
using namespace std;

int main()
{
    double down,loan;
    int month,vol;

    while(cin>>month>>down>>loan>>vol)
    {
        int i,j;
        double x,y,n,p;
        double dep[120]={0.0};
        double invalue,payment[120],cost[120];
        double depcost,newcost;

        for(i=0; i<vol; i++)
        {
            cin>>j>>x;
            dep[j]=x;
        }

        for(i=0; i<month; i++)
        {
            if( dep[i]==0 )
            {
                x=dep[i-1];
                while(dep[i]==0 && i<month)
                {
                    dep[i]=x;
                    i++;
                }
            }
        }


        invalue=loan + down;

        payment[0]=loan;
        for(i=1; i<month; i++)
            payment[i]=payment[i-1]-down;

        y=invalue;
        for(i=0; i<month; i++)
        {
            x=dep[i];
            depcost = y*x;
            newcost=y-depcost;
            cost[i]=newcost;
            y=newcost;
        }

        for(i=0; i<month; i++)
            cout<<cost[i]<<"   ";
        cout<<endl;
        for(i=0; i<month; i++)
            cout<<payment[i]<<"   ";

        for(i=0; i<month; i++)
        {
            x=payment[i]-cost[i];
            if(x<0)
            {
                if(i==1)
                    cout<<i<<" month\n";
                else
                    cout<<i<<" months\n";
                break;
            }
        }
    }
}
