#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    while(cin>>n && n)
    {
        c++;
        int ans,x,i,cnt=0;

        for(i=0; i<n; i++)
        {
            cin>>x;
            if(x==0)
                cnt++;
        }

        ans=(n-cnt) - cnt;

        cout<<"Case "<<c<<": "<<ans<<endl;
    }
    return 0;
}
