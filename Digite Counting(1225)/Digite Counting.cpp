#include<iostream>
using namespace std;

int main()
{

    cin>>t;
    while(t--)
    {
        int a[20];
        int x,i,j,r,t,z;


        for(i=1; i<=x; i++)
        {
           if(i<10)
              a[i]=a[i]+1;
        else
        {
            r=i;
            while(r>=0)
            {
                z=r%10;
                a[z]=a[z]+1;
                r=r/10;
            }
        }
        }

        for(i=0; i<10; i++)
            cout<<a[i]<<" ";

        if(t>0)
           cout<<endl;

    }

    return 0;
}
