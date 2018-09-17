#include<stdio.h>
#include<math.h>
int main()
{
    int tst,c=1;
    double u,v,t,a,s;

    while(scanf("%d",&tst)==1 && tst!=0)
    {

        if(tst==1)
        {
             scanf("%lf%lf%lf",&u,&v,&t);

             a=(v-u)/t;
             s=(u+v)*t/2;
             printf("Case %d: %.3lf %.3lf\n",c,s,a);
        }

        else if(tst==2)
        {
             scanf("%lf%lf%lf",&u,&v,&a);

             t=(v-u)/a;
             s=(u+v)*t/2;
             printf("Case %d: %.3lf %.3lf\n",c,s,t);
        }

        else if(tst==3)
        {
             scanf("%lf%lf%lf",&u,&a,&s);


             v=sqrt(u*u+2.0*a*s);
             t=(v-u)/t;
             printf("Case %d: %.3lf %.3lf\n",c,v,t);
        }

        else if(tst==4)
        {
             scanf("%lf%lf%lf",&v,&a,&s);

             u=sqrt(v*v-2.0*a*s);
             t=(v-u)/a;
             printf("Case %d: %.3lf %.3lf\n",c,u,t);
        }
        c++;
    }

    return 0;
}


