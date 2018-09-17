#include<stdio.h>
#include<math.h>
int main()
{
    float u,v,t,a,s;
    int c=1,tst;
    while(scanf("%d",&tst)==1 && tst!=0)
    {

        if(tst==0)
            break;

        if(tst==1)
        {
             scanf("%f%f%f",&u,&v,&t);

             a=(v-u)/t;
             s=u*t+.5*a*t*t;
             printf("Case %d: %.3f %.3f\n",c,s,a);
        }

        else if(tst==2)
        {
             scanf("%f%f%f",&u,&v,&a);

             t=(v-u)/a;
             s=u*t+.5*a*t*t;
             printf("Case %d: %.3f %.3f\n",c,s,t);
        }

        else if(tst==3)
        {
             scanf("%f%f%f",&u,&a,&s);


             v=sqrt(u*u+2.0*a*s);
             t=(v-u)/t;
             printf("Case %d: %.3f %.3f\n",c,v,t);
        }

        else if(tst==4)
        {
             scanf("%f%f%f",&v,&a,&s);

             u=sqrt(v*v-2.0*a*s);
             t=(v-u)/a;
             printf("Case %d: %.3f %.3f\n",c,u,t);
        }
        c++;
    }

    return 0;
}
