#include<stdio.h>
#include<math.h>

int main()
{
    int a[120];
    int i,j,x,sum=0,cnt=0;

    printf("PERFECTION OUTPUT\n");
    for(i=0; ;i++)
    {
        scanf("%d",&a[i]);
        cnt++;
        if(a[i]==0)
            break;
    }

    for(i=1; ; i++)
    {

        x=a[i-1];
        if(x==0){
            printf("END OF OUTPUT\n");
            break;
        }


        for(j=1; j<=(x/2); j++)
            if(x%j==0)
               sum=sum+j;

        if(sum==x)
            printf("%5d  PERFECT\n",x);
        else if(sum>x)
            printf("%5d  ABUNDANT\n",x);
        else if(sum<x)
            printf("%5d  DEFICIENT\n",x);
        sum=0;

      }

      return 0;


}
