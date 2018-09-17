#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;

    while(tst--)
    {
        getchar();

        int i,M,x,y,sum,r;
        long long n;
        cin>>M;

        cin>>x>>y;
        n=x+y;
        for(i=1; i<M; i++)
        {
            cin>>x>>y;
            sum=x+y;
            if(sum>=10)
            {
                n++;
                r=sum%10;
                n=n*10 + r;
            }
            else
                n=n*10 + sum;
        }

        cout<<n<<endl;
        if(tst!=0)
            cout<<endl;
    }
    return 0;
}
