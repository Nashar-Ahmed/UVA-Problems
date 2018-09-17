#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];

    while(a[0]!=0 && a[1]!=0 && a[2]!=0)
    {
        int x,y,z;
        long long int i,j,k;

        if((a[0]+a[1])>a[2] || (a[1]+a[2])>a[0] || (a[0]+a[2])>a[1])
        {
            sort(a,a+3);

            x=a[0];
            y=a[1];
            z=a[2];

            i=z*z;
            j=x*x;
            k=y*y;

            if(i==j+k)
                cout<<"right\n";
            else
                cout<<"wrong\n";
        }
        else
            cout<<"wrong\n";

        cin>>a[0]>>a[1]>>a[2];
    }
    return 0;
}
