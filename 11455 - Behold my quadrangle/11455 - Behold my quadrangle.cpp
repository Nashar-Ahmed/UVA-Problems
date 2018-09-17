#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int i,flag=0;
        long long a[4],x;
        for(i=0; i<4; i++)
            cin>>a[i];
        sort(a,a+4);
        if((a[0]+a[1]+a[2])>a[3])
        {
            x=a[0];
            if(a[0]==x && a[1]==x && a[2]==x && a[3]==x)
                cout<<"square\n";
            else if(a[0]==a[1] && a[2]==a[3])
                cout<<"rectangle\n";
            else
                cout<<"quadrangle\n";
        }
        else
            cout<<"banana\n";
    }
    return 0;
}
