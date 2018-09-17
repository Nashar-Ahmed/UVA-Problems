#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int tst;

    while(cin>>tst && tst!=0)
    {
        long int c1,c2;
        cin>>c1>>c2;
        while(tst--)
        {
            long int x,y,x1,y1;
            cin>>x1>>y1;

            x=x1-c1;
            y=y1-c2;

            if(x==0 || y==0 || (x==0 && y==0))
                cout<<"divisa\n";
            else if(x<0 && y>0)
                cout<<"NO\n";
            else if(x>0 && y>0)
                cout<<"NE\n";
            else if(x>0 && y<0)
                cout<<"SE\n";
            else if(x<0 && y<0)
                cout<<"SO\n";
        }
    }
    return 0;
}
