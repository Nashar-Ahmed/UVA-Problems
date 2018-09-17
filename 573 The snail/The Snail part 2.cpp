#include<bits/stdc++.h>
using namespace std;

int main()
{
    double H,U,D,F;
    while(cin>>H>>U>>D>>F && H!=0)
    {

        double a,b=0.0,c,d,n,x;
        int i,j;
        n=(U*F)/100;
        x=U;

        if(x>0)
           b=b+x;

        if(b>H)
        {
            cout<<"success on day 1\n";
        }

        else
        {
            b=b-D;
            if(b<0)
            {
                cout<<"failure on day 1"<<endl;
                break;
            }



            i=2;
            while(1)
            {
                x=x-n;
                if(x<0)
                    x=0;

                b=b+x;
                if(b>H)
                {
                    cout<<"success on day "<<i<<endl;
                    break;
                }
                b=b-D;
                if(b<0)
                {
                    cout<<"failure on day "<<i<<endl;
                    break;
                }
                i++;
            }
        }
    }
    return 0;
}
