#include<stdio.h>
int main()
{
    int i,j,a[10];
    for(i=0;i<10;i++)
        a[i]=i;

    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    a[10]={0};

    for(i=0;i<10;i++)
        printf("%d ",a[i]);

}
