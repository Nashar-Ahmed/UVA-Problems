#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n,c=0;
    while(cin>>r>>n)
    {
        if(r==0 && n==0)
            break;

        c++;
        int x,cnt=0,y;
        x=n;
        while(x<r && cnt<=26)
        {
            x=x+n;
            cnt++;
        }
        if(cnt<=26)
            cout<<"Case "<<c<<": "<<cnt<<endl;
        else
            cout<<"Case "<<c<<": "<<"impossible\n";
    }
    return 0;
}
