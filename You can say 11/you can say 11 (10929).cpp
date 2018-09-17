#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        string str;
        int sum=0,len,i;

        cin>>str;
        if(str[0]=='0' && str.size()==1)
            break;
        len=str.size();

        for(i=0; i<len; i+=2)
            sum=sum+(str[i]-48);
        for(i=1; i<len; i+=2)
            sum=sum-(str[i]-48);
        if(sum%11==0)
            cout<<str<<" is a multiple of 11.\n";
        else
            cout<<str<<" is not a multiple of 11.\n";

    }

}
