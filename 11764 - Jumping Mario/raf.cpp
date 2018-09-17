#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a[10];
    for(i=0; ;i++)
    {
        cin>>j;
        if(j=='\n')
            break;
        a[i]=j;
    }
    for(i=0; i<2; i++)
        cout<<a[i]<<" ";
}
