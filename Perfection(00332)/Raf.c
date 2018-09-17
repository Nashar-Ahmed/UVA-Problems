#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    while(1)
    {
        scanf("%d",&x);

        for(i=1; i<=(x/2); i++)
            if(x%i==0)
               sum=sum+i;

        if(sum==x)
            printf("Perfect\n");
        else if(sum>x)
            printf("Abundant\n");
        else if(sum<x)
            printf("Deficient\n");
        sum=0;
    }
}
