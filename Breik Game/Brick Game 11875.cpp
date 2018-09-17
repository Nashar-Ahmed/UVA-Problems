#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,tst;
    cin>>tst;
    while(tst--)
    {
        t++;
        int i,j,x,n,c;
        int a[12];
        cin>>n;
        for(i=0; i<n; i++)
            cin>>a[i];
        x=n/2;
        cout<<"Case "<<t<<": "<<a[x]<<endl;

    }
    return 0;
}
