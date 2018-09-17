#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tst,i;
    cin>>tst;
    for(i=1; i<=tst; i++)
    {
        int a[3],j;
        for(j=0; j<3; j++)
            cin>>a[j];
        sort(a,a+3);

        printf("Case %d: %d\n",i,a[1]);

    }

}
