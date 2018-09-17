#include<stdio.h>
#include<math.h>
int checkprime(long int x);

int main()
{
    long int i,x,y,c,a,b,count=0;

    while(scanf("%ld",&c)==1){

    count=0;
    for(i=2;;i++)
    {
        a=checkprime(i);
        if(a!=1)
        {
            x=i;
            y=x+2;
            b=checkprime(y);
            if(b!=1)
            {
                count++;
                if(count==c)
                {
                    printf("(%ld, %ld)\n",x,y);
                    break;
                }
            }
        }
    }
    }

    return 0;
}




int checkprime(long int x)
{
    long int i;
    int count=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            count=1;
            break;
        }
    }
    if(count==1)
        return 1;
    else
        return 0;
}
