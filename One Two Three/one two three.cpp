#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,cnt=0;
        string str;
        cin>>str;
        i=str.size();
        if(i==5)
            cout<<3;
        else
        {
            if(str[0]=='o')
                cnt++;
            if(str[1]=='n')
                cnt++;
            if(str[2]=='e')
                cnt++;
        }
        if(cnt>=2)
            cout<<1;
        else
            cout<<2;
        cout<<endl;
    }
    return 0;
}
