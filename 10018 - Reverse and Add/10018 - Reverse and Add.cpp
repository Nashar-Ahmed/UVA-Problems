#include<bits/stdc++.h>
using namespace std;

int palimdom(long long n)
{
    long long x,rev=0;
    x=n;

    while(x>0)
    {
        rev=rev*10 + (x%10);
        x=x/10;
    }

    if(rev==n)
        return 1;
    else
        return 0;
}



int main()
{
    long long tst;
    cin>>tst;
    while(tst--)
    {
        long long m,x,n,rev=0,sum=0,cnt=0;
        int flag=0;

        cin>>n;
        m=n;

        while(flag==0)
        {
            x=m;
            rev=0;
            while(x>0)
            {
                rev=rev*10 + (x%10);
                x=x/10;
            }

            sum=m+rev;
            flag=palimdom(sum);
            cnt++;
            m=sum;
        }


        cout<<cnt<<" "<<sum<<endl;
    }

    return 0;
}
