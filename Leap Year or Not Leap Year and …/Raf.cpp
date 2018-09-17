#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int c=0;

    while(cin>>str)
    {
        if(c>0)
            cout<<endl;
        c++;
        long int i,j,l,cnt=0,a,n,x,p=0,r=0,
                  n1,x1,p1=0,r1=0,
                  x2,p2=0,r2=0,n2,
                  x3,p3=0,r3=0,n3,
                  x4,p4=0,r4=0,n4;

        l=str.size();

        for(i=0; i<l; i++)
        {
            a=str[i]-48;

            n=p*10 + a;
            x=n/4;
            if(x!=0)
                r=r*10 + x;
            p=n%4;

            n1=p1*10 + a;
            x1=n1/100;
            if(x1!=0)
                r1=r1*10 + x1;
            p1=n1%100;

            n2=p2*10 + a;
            x2=n2/400;
            if(x2!=0)
                r2=r2*10 + x2;
            p2=n2%400;

            n3=p3*10 + a;
            x3=n3/55;
            if(x3!=0)
                r3=r3*10 + x3;
            p3=n3%55;

            n4=p4*10 + a;
            x4=n4/15;
            if(x4!=0)
                r4=r4*10 + x4;
            p4=n4%15;

        }

        if(p==0)
            cnt=1;
        if(p1==0)
            cnt=0;
        if(p2==0)
            cnt=1;

        if(cnt==1)
            cout<<"This is leap year.\n";
        if(p3==0)
            cout<<"This is bulukulu festival year.\n";
        if(p4==0)
            cout<<"This is huluculu festival year.\n";
        if(cnt==0 && p2!=0 &&p3!=0 && p4!=0)
            cout<<"This is an ordinary year.\n";


    }

    return 0;
}
