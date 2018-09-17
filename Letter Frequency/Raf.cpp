#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();

    while(t--)
    {
        int a[200]={0};
        int i,j,x=0,l,cnt=0;
        char str[1000];
        char ch;

        gets(str);
        l=strlen(str);

        for(i=0; i<l; i++)
        {
            if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
            {
                if(str[i]>=65 && str[i]<=90)
                    a[str[i]+32]++;
                else
                    a[str[i]]++;
            }
        }

        for(i=97; i<=122; i++)
            if(a[i]>x)
               x=a[i];

        for(i=97; i<=122; i++)
        {
            if(a[i]==x)
            {
                ch=i;
                cout<<ch;
            }
        }

        cout<<endl;

    }
}
