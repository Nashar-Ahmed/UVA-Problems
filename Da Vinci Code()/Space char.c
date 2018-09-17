#include<stdio.h>
int main()
{
    char s[10];
    int i,j;

    for(i=0;i<5;i++)
        s[i]=32;
        //scanf("%c",&s[i]);

    //printf("%d\n",s[1]);
    //printf("%c10",32);
    //gets(s);
    for(i=0; i<5; i++)
        printf("%c",s[i]);
    printf("X");
}
