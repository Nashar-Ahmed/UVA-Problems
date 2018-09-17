#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        int x,y,i,j=0,n,m,t;
        vector<int> var;

        if(a<b)
        {
            var.push_back(0);
            t=a;
            a=b;
            b=t;
        }

        while(b!=0)
        {
            x=a/b;
            y=a%b;
            if(x<1)
                break;
            var.push_back(x);
            a=b;
            b=y;
        }

        for(i=0; i<var.size(); i++)
           cout<<var[i]<<" ";

        cout<<endl;
    }
}
