#include<bits/stdc++.h>
using namespace std;

struct array_per
{
    int index;
    string value;

}a[10000];

int main()
{
     int val,i,j,tc,n,k,x,cnt=0;
    cin>>tc;
    getchar();

    for(int m=1;m<=tc;m++)
    {
         n=val=0;
         k=0;
         char str[100000];
         char *pch;

         gets(str);
         pch= strtok(str," ");

         while(pch != NULL)
         {
              val=atoi(pch);
              pch = strtok (NULL," ");
              a[n++].index=val;
         }

         gets(str);
         pch= strtok(str," ");
         int ind=0;

          while(pch != NULL)
          {
            a [ind++].value = pch;
            pch = strtok (NULL, " ");
          }


         for(i=0;i<n;i++)
         {
            for(j=i+1;j<n;j++)
            {
                if(a[i].index>a[j].index)
                swap(a[i],a[j]);
            }
         }

         if(cnt>0)
            cout<<endl;
         cnt++;

         getchar();

         for(i=0;i<ind;i++)
         cout<<a[i].value<<endl;
    }
    return 0;
}
