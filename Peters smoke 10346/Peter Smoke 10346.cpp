#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        int r1,r2,sum=0;
        r1=n/k;
        r2=n%k;
        sum=r1+r2;
        while(r1>=1)
        {
            n=n+r1;
            r1=sum/k;
            r2=sum%k;
            sum=r1+r2;
        }

        cout<<n<<endl;
    }

    return 0;
}
