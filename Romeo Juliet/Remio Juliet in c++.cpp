#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    double x1,y1,x2,y2,q1,q2;
    double ab,D;

    while(cin>>x1>>y1>>x2>>y2>>q1>>q2)
    {
        ab=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        D=ab/tan((q1*pi)/180)+ab/tan((q2*pi)/180);
        printf("%.3lf\n",D);
    }
    return 0;
}

