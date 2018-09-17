#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b;
    double x,y;

    double d,m,z;

    cin>>a>>b;
    cin>>d;
    m=1/(d*b);

    x=a*m + 1;
    y=b*m;
    cout<<x<<" "<<y<<endl;
}
