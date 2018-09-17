#include<bits/stdc++.h>

#define pi 2*acos(0.0)

using namespace std;

int main()
{
    double l,h,w,q,d,x,ac,area;

    while(cin>>l>>w>>h>>q)
    {
        d=tan((pi*q)/180)*l;

        if(d<h)
        {
            x=l*sin((pi*q)/180);
            ac=x/tan((pi*q)/180)+x/tan((pi*(90-q))/180);
            area=(w*h*l)-(.5*x*ac*w);
            cout<< fixed <<setprecision(3)<<area <<" mL";
            cout<<endl;
        }

        else if(d==h)
        {
            area=.5*h*l*w;
            cout<< fixed << setprecision(3)<< area <<" mL";
            cout<<endl;
        }

        else if(d>h)
        {
            q=90-q;
            x=h*sin((pi*q)/180);
            ac=x/tan((pi*q)/180) + x/tan((pi*(90-q))/180);
            area=.5*ac*x*w;
            cout<< fixed << setprecision(3)<< area <<" mL";
            cout<<endl;
        }
    }

    return 0;
}
