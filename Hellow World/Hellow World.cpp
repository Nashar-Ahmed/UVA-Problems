#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int c=1,n;
    while(cin>>n)
    {
        if(n<0)
            break;

        int i,j,a,b,x;

        for(i=0; ;i++)
        {
            x=pow(2,i);
            if(x>=n)
            {
                cout<<"Case "<<c<<": "<<i<<endl;
                break;
            }
        }
        c++;
    }

    return 0;
}
