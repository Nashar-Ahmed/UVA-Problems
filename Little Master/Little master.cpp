#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        double x,y,r,d,mn,mx;
        cin>>x>>y>>r;

        d=sqrt((pow(x,2)+pow(y,2)));
        mn=r-d;
        mx=r+d;

        printf("%.2lf %.2lf\n",mn,mx);
    }

    return 0;
}
