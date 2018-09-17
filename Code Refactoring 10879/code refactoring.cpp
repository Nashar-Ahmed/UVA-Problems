#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long tst,c=0;
    cin>>tst;

    while(tst--)
    {
        c++;

        long long n,i,j=0,cnt=0,x;
        long long a[4]={0};

        cin>>n;

        for(i=2; i<n; i++)
        {
            if(n%i==0)
            {
                x=n/i;
                a[j++]=i;
                a[j++]=x;
                cnt++;
            }
            if(cnt==2)
                break;
        }

        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",c,n,a[0],a[1],a[2],a[3]);


    }
    return 0;
}
