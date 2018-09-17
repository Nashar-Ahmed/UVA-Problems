#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a[1000];
    int x,i,j=0,r,z,cnt=0;

    cin>>x;

    for(i=1; i<=x; i++)
    {
        if(i<10){
            a[j++]=i;
            cnt++;
        }
        else
        {
            r=i;
            while(r>0)
            {
                z=r%10;
                a[j++]=z;
                r=r/10;
                cnt++;
            }
        }
    }

    for(i=0; i<cnt; i++)
        cout<<a[i]<<" ";
}
