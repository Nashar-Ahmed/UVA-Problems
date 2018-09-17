#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin>>tst;
    cout<<"Lumberjacks:\n";
    while(tst--)
    {
        int i,j,x,flag=0;
        int a[10];

        for(i=0; i<10; i++)
            cin>>a[i];
        x=a[1]-a[0];

        if(x>0)
        {
            flag=1;
            for(i=0; i<9; i++)
                if((a[i+1]-a[i]) <= 0)
                {
                    flag=0;
                    break;
                }
        }
        else if(x<0)
        {
            flag=1;
            for(i=0; i<9; i++)
                if((a[i+1]-a[i]) >= 0)
                {
                    flag=0;
                    break;
                }
        }
        else if(x==0)
           flag=0;


        if(flag==1)
            cout<<"Ordered\n";
        else if(flag==0)
            cout<<"Unordered\n";



    }
    return 0;
}
