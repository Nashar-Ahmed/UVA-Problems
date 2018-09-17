#include<stdio.h>
int main()
{
    int feb[110];
    int i,j;
    feb[0]=1;feb[1]=2;
    for(i=0;i<10;i++)
        feb[i+2]=feb[i]+feb[i+1];
    printf("%d\n",i);
    for(i=0;i<50;i++)
        printf("%d ",feb[i]);
}
