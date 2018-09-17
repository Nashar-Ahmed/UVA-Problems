#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1[600000],a2[600000];
    int i,j=0,x,n,z=0,cnt=0;
    int flag=1;

    cin>>n;
    z=n;

    for(i=0; i<n; i++)
    {
        a1[i]=i+1;
    }

    while(1){


    j=0;
    for(i=0; i<z; i++)
    {
        if(flag==1)
        {
            a1[i]=0;
            flag=2;
        }
        else if(flag==2)
        {
            a2[j++]=a1[i];
            flag=1;
        }
    }
    if(j==1)
    {
        cout<<a2[0]<<" "<<" j"; break;
    }




    z=0;
    for(i=0; i<j; i++)
    {
        if(flag==1)
        {
            a2[i]=0;
            flag=2;
        }
        else if(flag==2)
        {
            a1[z++]=a2[i];
            flag=1;
        }

    }
    if(z==1)
    {
        cout<<a1[0]<<" z"; break;
    }

     cnt++;



    }

}

