#include<bits/stdc++.h>
using namespace std;

int main()
{
    double H,U,D,F;
    while(scanf("%ld%ld%ld%ld",&H,&U,&D,&F)==4 && H!=0)
    {
        double a,b,c,d,x,y,z;
        int i,j;
        a=H;
        b=U;
        c=D;
        d=F;


        d=(F*U)/100;
        cout<<d;
        x=b;

        if(b>=a)
           cout<<"Day 1\n";
        else
        {
            b=b-c;
            for(i=2; ; i++)
            {
                x=x-d;
                if(x<0){
                    cout<<"Failer in day "<<i<<endl;
                    break;
                }
                b=b+x;
                if(b>=a)
                {
                    cout<<"Success in day "<<i<<endl;
                    break;
                }
                b=b-c;
            }
        }
    }
}
