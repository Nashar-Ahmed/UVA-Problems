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

            cout<<"Discarded cards: ";
            for(i=1; i<=n; i++)
            {
                if(n==1)
                    break;

                if(i%2!=0)
                    cout<<i;
                else
                    a[j++]=i;
                if(i%2!=0 && i<n)
                    cout<<", ";

            }

            if(j>1)
                cout<<",";
            while(j>1)
            {

               x=a[0];
               for(i=0; i<j-1; i++)
                   a[i]=a[i+1];
               a[j-1]=x;
                   cout<<" "<<a[0];
               if(j>2)
                   cout<<",";
               for(i=0; i<j-1 ; i++)
                   a[i]=a[i+1];

                 j--;

             }
             if(n==1)
                cout<<"\nRemaining card: "<<1<<endl;
             else
                cout<<"\nRemaining card: "<<a[0]<<endl;

        }

        else if(n%2==0)
        {

            cout<<"Discarded cards: ";
            for(i=1; i<=n; i++)
            {
                if(i%2!=0)
                    cout<<i;
                else
                    a[j++]=i;
                if(i%2!=0 && i<n-1)
                    cout<<", ";
            }
            if(j>1)
            {

                cout<<", ";
                cout<<a[0];
                for(i=0; i<j-1; i++)
                   a[i]=a[i+1];
                 j--;

            }
            if(j>1)
                cout<<",";
            while(j>1)
            {

               x=a[0];
               for(i=0; i<j-1; i++)
                   a[i]=a[i+1];
               a[j-1]=x;
                   cout<<" "<<a[0];
               if(j>2)
                   cout<<",";
               for(i=0; i<j-1 ; i++)
                   a[i]=a[i+1];
               j--;

            }

            cout<<"\nRemaining card: "<<a[0]<<endl;

        }

        cin>>n;
    }

    return 0;
}

