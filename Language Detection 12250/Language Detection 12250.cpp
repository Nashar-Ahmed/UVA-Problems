#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int c=0;
    while(cin>>str)
    {
        if(str=="#")
            break;

        c++;
        if(str=="HELLO")
            printf("Case %d: ENGLISH\n",c);
        else if(str=="HOLA")
            printf("Case %d: SPANISH\n",c);
        else if(str=="HALLO")
            printf("Case %d: GERMAN\n",c);
        else if(str=="BONJOUR")
            printf("Case %d: FRENCH\n",c);
        else if(str=="CIAO")
            printf("Case %d: ITALIAN\n",c);
        else if(str=="ZDRAVSTVUJTE")
            printf("Case %d: RUSSIAN\n",c);
        else
            printf("Case %d: UNKNOWN\n",c);
    }
    return 0;
}
