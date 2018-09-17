#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int feb[95];
    int i,t;
    feb[0]=1;feb[1]=2;
    for(i=0;i<90;i++)
        feb[i+2]=feb[i]+feb[i+1];

    cin>>t;
    while(t--)
    {
        int i,j=0,cnt=0,n,m=0,x,l,p,len;
        long long int b[200];
        int a[200];

        string str,s1;

        cin>>l;
        for(i=0; i<l; i++)
            cin>>b[i];

        getchar();
        cin>>s1;

        for(i=0; i<l; i++)
            for(j=0; j<90; j++)
                if(b[i]==feb[j])
                {
                    a[i]=j;
                    break;
                }
        for(i=0; i<l; i++)
            if(b[i]>m)
            {
                m=b[i];
                p=i;
            }
        n=a[p];

        j=0;
        len=s1.size();
        for(i=0; i<len; i++)
        {
            if(s1[i]<93&&s1[i]>64)
                str[j++]=s1[i];
        }

        cout<<str;



    }

}
