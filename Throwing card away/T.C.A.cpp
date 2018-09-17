#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n)
    {
        int i,j=0,b,c,d,x;
        int a[100];

        if(n%2!=0)
        {

            for(i=1; i<=n; i++)
            {
                if(n==1)
                    break;

                if(i%2!=0)
                    cout<<i<<" ";
                else
                    a[j++]=i;
            }

            while(j>1)
            {
               x=a[0];
               for(i=0; i<j-1; i++)
                   a[i]=a[i+1];
               a[j-1]=x;
                   cout<<a[0]<<" ";
               for(i=0; i<j-1 ; i++)
                   a[i]=a[i+1];

                 j--;
             }

             if(n==1)
                cout<<"\nRemaining "<<1<<endl;
             else
                cout<<"\nRemaining "<<a[0]<<endl;

        }

        else if(n%2==0)
        {
            for(i=1; i<=n; i++)
            {
                if(i%2!=0)
                    cout<<i<<" ";
                else
                    a[j++]=i;
             }

            if(j>1)
            {
                cout<<a[0]<<" ";
                for(i=0; i<j-1; i++)
                   a[i]=a[i+1];
                 j--;
            }

            while(j>1)
            {
               x=a[0];
               for(i=0; i<j-1; i++)
                   a[i]=a[i+1];
               a[j-1]=x;
                   cout<<a[0]<<" ";
               for(i=0; i<j-1 ; i++)
                   a[i]=a[i+1];

                 j--;
            }
            cout<<"\nRemaining "<<a[0]<<endl;
        }

        cin>>n;
    }
}
