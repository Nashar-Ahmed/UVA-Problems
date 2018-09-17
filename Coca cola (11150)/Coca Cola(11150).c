#include<stdio.h>
int main()
{
    int x,p,a,b;


    while(scanf("%d",&x)==1){
    p=x;
    while(p>1)
    {
        if(p>=3)
        {
            a=p/3;
            x=x+a;

            b=p%3;
            p=a+b;
        }
        if(p==2)
        {
            p++;
        }


    }
    printf("%d\n",x);
    }


    return 0;
}
