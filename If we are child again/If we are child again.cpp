#include<bits/stdc++.h>
using namespace std;

int main()
{
     char str[1000000];
     long long int a;
     char ch;

     while(scanf("%s %c %lld",&str,&ch,&a)==3)
     {
         char str1[100000];
         long long int i,j=0,x,m,n,cnt=0,l,c=0,p=0;

         l=strlen(str);

         j=0;
         for(i=0; i<l; i++)
         {
              n=p*10 + (str[i]-48);
              x=n/a;
              if(x!=0)
                str1[j++]=x+48;
              p=n%a;
         }

         str1[j]='\0';
         if(ch=='/' && j==0)
            printf("0\n");
         else if(ch=='/' && j!=0)
            printf("%s\n",str1);
         else if(ch=='%')
            printf("%lld\n",p);;


     }

     return 0;
}
