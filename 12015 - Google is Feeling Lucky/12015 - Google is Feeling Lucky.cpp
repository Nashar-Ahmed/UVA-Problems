#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst,c=0;;
    cin>>tst;
    while(tst--)
    {
        c++;

        int a[10];
        string str[10];
        int i,mx=0;

        for(i=0; i<10; i++)
            cin>>str[i]>>a[i];
        for(i=0; i<10; i++)
            if(a[i]>mx)
               mx=a[i];

        printf("Case #%d:\n",c);
        for(i=0; i<10; i++)
            if(a[i]==mx)
               cout<<str[i]<<endl;
    }
    return 0;
}
