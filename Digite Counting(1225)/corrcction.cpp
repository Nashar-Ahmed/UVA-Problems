#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[10]={0};
        int x,i,j,r,t,z,n;

        cin>>x;

        for(i=1; i<=x; i++)
        {
            if(i<10)
                a[i]=a[i]+1;
            else
            {
                n=i;
                while(n>0)
                {
                    r=n%10;
                    a[r]=a[r]+1;
                    n=n/10;
                }
            }
        }

        for(i=0; i<10; i++){
            cout<<a[i];
            if(i<9)
                cout<<" ";
        }
        cout<<endl;


    }

    return 0;
}
