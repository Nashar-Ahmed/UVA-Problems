#include<stdio.h>
#include<math.h>
int main()
{
    int l,w,h,q1,q2;
    float x,ac,a,d;
    float pi=2*acos(0.0);

    while(scanf("%d%d%d%d",&l,&w,&h,&q1)==4)
    {
        x=l*sin((q1*pi)/180);
        ac=x/tan((pi*q1)/180)+x/tan((pi*(90-q1))/180);
        d=tan((q1*pi)/180);
        printf("%f\n",d);
        //printf("%f\n",(.5*ac*x*w));
        a=(l*w*h)-(.5*ac*x*w);
        printf("%.3f ml\n",a);
    }

    return 0;

}
