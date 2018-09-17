#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;

    while(t--)
    {
        c++;
        long long int x,y,cnt=0,m,n,sum=0,i,j;
        long long int a[3];

        for(i=0; i<3; i++)
        {
            cin>>a[i];
        }
        cout<<"Case "<<c<<": ";

            for(i=0; i<3; i++)
            sum=sum+a[i];
            for(i=0; i<3; i++)
            {
                x=sum-a[i];
                if(a[i]>=x)
                  cnt=1;
            }

           if(cnt==1)
           {
               cout<<"Invalid\n";
               continue;
           }

           n=a[0];
           for(i=0; i<3; i++)
               if(a[i]-n==0)
                  cnt++;

           if(cnt==3)
              cout<<"Equilateral\n";
           else if(cnt==2)
              cout<<"Isosceles\n";
           else
               cout<<"Scalene\n";


    }

    return 0;
}
