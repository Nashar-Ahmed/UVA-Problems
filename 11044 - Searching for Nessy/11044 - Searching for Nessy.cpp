#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n,m;
        double x,y;
        int ans;

        cin>>n>>m;

        x=(n-2)/3.0;
        y=(m-2)/3.0;

        x=ceil(x);
        y=ceil(y);

        ans=x*y;

        cout<<ans<<endl;
    }

    return 0;
}
