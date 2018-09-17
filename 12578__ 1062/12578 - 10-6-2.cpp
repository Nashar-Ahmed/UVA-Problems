#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double l,w,r,a1,a2;
        cin>>l;
        w=(3*l)/5;
        r=l/5;
        a1=pi*r*r;
        a2=(w*l)-(a1);

        printf("%.2lf  %.2lf\n",a1,a2);
    }
}
