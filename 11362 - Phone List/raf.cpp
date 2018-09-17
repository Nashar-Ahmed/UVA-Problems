#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while(cin>>n)
    {
         int i,j;
         string str[1000];
         for(i=0; i<n; i++)
            cin>>str[i];

         sort(str,str+n);
         for(i=0; i<n; i++)
            cout<<str[i]<<endl;

    }
}
