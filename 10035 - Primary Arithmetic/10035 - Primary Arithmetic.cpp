#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;

        int cnt=0,x,y,carry=0,nw;
        while(a>0 || b>0)
        {
            x=0;
            if(a>0)
            {
                x=a%10;
                a=a/10;
            }

            y=0;
            if(b>0)
            {
                y=b%10;
                b=b/10;
            }

            nw=x+y+carry;
            carry=nw/10;
            nw=nw%10;
            if(carry==1)
                cnt++;
        }

        if(cnt==0)
           cout<<"No carry operation.\n";
        else if(cnt==1)
            cout<<cnt<<" carry operation.\n";
        else
            cout<<cnt<<" carry operations.\n";
    }

    return 0;
}
