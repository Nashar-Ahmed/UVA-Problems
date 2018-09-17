#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n)
    {
        long int i,j=0,b,c,d,x;
        long int a[500000];

        if(n%2!=0)
        {
            for(i=1; i<=n; i++)
            {
                if(n==1)
                    break;
                if(i%2==0)
                    a[j++]=i;

            }
            while(j>1)
            {

               x=a[0];
               for(i=0; i<j-1; i++)
                   a[i]=a[i+1];
               a[j-1]=x;
               for(i=0; i<j-1 ; i++)
                   a[i]=a[i+1];

                 j--;

             }
             if(n==1)
                cout<<"1"<<1<<endl;
             else
                cout<<a[0]<<endl;

        }

        else if(n%2==0)
        {
            for(i=1; i<=n; i++)
            {
                if(i%2==0)
                    a[j++]=i;
            }
            if(j>1)
            {

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
               for(i=0; i<j-1 ; i++)
                   a[i]=a[i+1];
               j--;

            }

            cout<<a[0]<<endl;

        }

        cin>>n;
    }

    return 0;
}


