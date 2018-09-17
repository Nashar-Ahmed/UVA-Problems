#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        long long ans;
        cin>>n;
        ans=(((((((n*567)/9)+7492)*235)/47)-498)/10)%10;
        if(ans<0)
            ans=ans * -1;

        cout<<ans<<endl;
    }
    return 0;
}
