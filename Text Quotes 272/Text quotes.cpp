#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    char ch;
    while(cin>>ch)
    {
        if(ch=='"')
        {
            cnt++;
            if(cnt%2!=0)
                cout<<"` `";
            if(cnt%2==0){
                cout<<"' '";
                cnt=0;
            }
        }
        else
            cout<<ch;
    }
    return 0;
}
