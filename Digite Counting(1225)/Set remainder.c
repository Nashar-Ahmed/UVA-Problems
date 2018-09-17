#include<stdio.h>
int main()
{
    int x=100;
    int y;
    y=x%10;
    printf("%d\n",y);
    x=x/10;
    y=x%10;
    printf("%d\n",y);
    x=x/10;
    y=x%10;
    printf("%d\n",y);
}
