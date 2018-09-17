#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    while(cin>>n)
    {
        if(n<0)
            break;
        long long int i,j,sum=1;

        for(i=1; i<=n; i++)
            sum=sum+i;
        cout<<sum<<endl;


    }
    return 0;
}
