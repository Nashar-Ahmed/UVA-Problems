#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    double l;
    while(cin>>l)
    {
        double x,con;
        con=(sin(72*pi/180))/(sin(63*pi/180));
        x=l*con;
        printf("%.10lf\n",x);
    }
    return 0;
}
