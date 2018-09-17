#include<bits/stdc++.h>
using namespace std;

int main()
{
     char s1[1000000];

     while(scanf("%s",&s1))
     {
         char str[100000], str1[100000];
         char ch;
         long long int a=0,i,j=0,x,m,n,cnt=0,l,c=0,p=0;
         l=strlen(s1);
         for(i=0; i<l; i++)
         {
             if(s1[i]=='/' || s1[i]=='%'){
                ch=s1[i];
                c=1;
             }
             else if(s1[i]!=' ' && c!=1)
                str[j++]=s1[i];

             else if(s1[i]!=' ')
             {
                 a=a*10 + (s1[i]-48);
             }

         }
         str[j]='\0';

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
            cout<<"0";
         else if(ch=='/' && j!=0)
            cout<<str1;
         else if(ch=='%')
            cout<<p;

         cout<<endl;


     }

     return 0;
}
