#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,c=0;
    cin>>tst;
    while(tst--)
    {
        c++;
        int i,j,n,cnt1=0,cnt2=0;
        int a[56];
        cin>>n;
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n; i++)
        {
            if(((i+1)<n) && (a[i]<a[i+1]))
                cnt1++;
            if(((i+1)<n) && (a[i]>a[i+1]))
                cnt2++;
        }

        printf("Case %d: %d %d\n",c,cnt1,cnt2);
    }
    return 0;
}
