#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b)
{
    int d;
    if(a>b)
        swap(a,b);

    while(1)
    {
        d=b%a;
        if(d==0)
            break;
        b=a;
        a=d;
    }

    return a;
}





int main()
{
    int tst;
    cin>>tst;
    getchar();

    while(tst--)
    {
        string str;
        getline(cin,str);

        int i,j=0,l,x,cnt=0,gcd,mx=0;
        int a[100];
        l=str.size();
        for(i=0; i<l; i++)
        {
            if(isdigit(str[i]))
            {
                x=str[i]-48;
                while(isdigit(str[i+1]) && (i+1)<l)
                {
                    x=x*10 + (str[i+1]-48);
                    i++;
                }
                a[j++]=x;
                cnt++;
            }
        }
        for(i=0; i<cnt-1; i++)
           for(j=i+1; j<cnt; j++)
            {
                gcd=GCD(a[i],a[j]);
                if(gcd>mx)
                    mx=gcd;
            }

        cout<<mx<<endl;
    }
    return 0;
}
