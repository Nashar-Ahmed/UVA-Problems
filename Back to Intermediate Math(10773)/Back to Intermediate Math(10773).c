#include<stdio.h>
#include<math.h>

int main()
{
    int test,i;
    float t1,t2,d,v,u;
    scanf("%d",&test);

    for(i=1; i<=test; i++)
    {
        scanf("%f%f%f",&d,&v,&u);
        if(d<=0||v<=0||u<=0)
           printf("Case %d: can't determine\n",i);
        else
        {
            t1=d/sqrt(pow(u,2)-pow(v,2));
            t2=d/u;
            printf("Case %d: %.3f\n",i,t1-t2);
        }
    }

    return 0;
}
