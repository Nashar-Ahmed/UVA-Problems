#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        string str;
        int i,l,j;
        cin>>str;

        l=str.size();

        if(str=="1" || str=="4" || str=="78")
            cout<<"+\n";
        else if(str[l-2]=='3' && str[l-1]=='5')
            cout<<"-\n";
        else if(str[0]=='9' && str[l-1]=='4')
            cout<<"*\n";
        else if(str[0]=='1' && str[1]=='9' && str[2]=='0')
            cout<<"?\n";
    }
    return 0;
}
