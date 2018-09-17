#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        if(str=="END")
            break;

        int l,x,n;
        l=str.size();

        if(l==1 && str[0]=='1')
            printf("1\n");
        else if(l==1)
            printf("2\n");
        else if(l<10)
            printf("3\n");
        else
            printf("4\n");
    }
    return 0;
}
