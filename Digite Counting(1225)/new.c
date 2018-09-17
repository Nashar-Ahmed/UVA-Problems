#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[20],i,j,n,m,b,g,s;
scanf("%d",&n);
for(s=1;s<=n;s++)
{
for(i=0;i<20;i++)
{
a[i]=0;
}
scanf("%d",&m);
for(i=1;i<=m;i++)
{
g=i;
if(i<10)
{
a[i]=a[i]+1;
}
else
{
while(g!=0)
{
b=g%10;
g=g/10;
a[b]=a[b]+1;
}
}
}

for(j=0;j<=9;j++)
{
printf("%d",a[j]);
printf(" ");
}
if(s!=n)
printf("\n");
}
return 0;
}

