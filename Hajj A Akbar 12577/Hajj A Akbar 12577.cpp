#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int c=0;
    while(cin>>str)
    {
        if(str=="*")
            break;

        c++;
        if(str=="Hajj")
            printf("Case %d: Hajj-e-Akbar\n",c);
        else if(str=="Umrah")
            printf("Case %d: Hajj-e-Asghar\n",c);
    }
    return 0;
}
