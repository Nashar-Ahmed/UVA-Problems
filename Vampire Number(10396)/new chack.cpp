#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int i,j,x,y,a,b,k,r,cnt=1;
    int a1[6],a2[6];



    for(i=100; i<1000; i++)
        for(j=100; j<1000; j++)
        {
            if((i%10==0)&&(j%10==0))
                continue;
            a=i;
            b=j;

            x=a*b;
            y=x;
            if(x>100000){
            for(k=0; k<3; k++)
            {
                a1[k]=a%10;
                a=a/10;
            }
            for(k=3; k<6; k++)
            {
                a1[k]=b%10;
                b=b/10;
            }
            for(k=0; k<6; k++)
            {
                a2[k]=y%10;
                y=y/10;
            }
            sort(a1,a1+6);
            sort(a2,a2+6);

            for(k=0; k<6; k++)
                if(a1[k]!=a2[k])
                {
                    cnt=0;
                    break;
                }

            if(cnt==1)
                cout<<x<<endl;

            }
        }


        cout<<"BIJOY\n";
        //for(k=0; k<v.size(); k++)
           //if(k%2==0)
               //cout<<v[k]<<endl;
}
