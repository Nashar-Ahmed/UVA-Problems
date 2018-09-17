#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,a[30];
        long long ans;
        int mx=0,mn=1000;
        cin>>n;

        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<n; i++)
        {
            if(a[i]>mx)
                mx=a[i];
            if(a[i]<mn)
                mn=a[i];
        }

        ans=2*(mx-mn);
        cout<<ans<<endl;
    }
    return 0;
}
