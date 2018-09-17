#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;

    while(cin>>n && n!=0){

    long long int a1[60000],a2[60000];
    long long int i,j=0,x,z=0,cnt=0;
    int flag=1;



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
        cout<<a2[0]<<endl; break;
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
        cout<<a1[0]<<endl; break;
    }



    }
    }
    return 0;

}


