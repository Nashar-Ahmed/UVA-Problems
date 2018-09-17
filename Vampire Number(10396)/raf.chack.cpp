#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,x,r,k,a,b,cnt=0,p,c=0;
    int a1[6],a2[6];
    vector <int> v;

    for(i=100; i<999; i++)
    {
        for(j=100; j<999; j++)
        {
            if(i%2 && j%2)
                continue;

            a=i; b=j;
            p=a*b;
            x=p;

            if(x>100000){
            for(k=0; k<3; k++)
            {
                r=a%10;
                a1[k]=r;
                a=a/10;
            }

            for(k=3; k<6; k++)
            {
                r=b%10;
                a1[k]=r;
                b=b/10;
            }

            for(k=0; k<6; k++)
            {
                r=x%10;
                a2[k]=r;
                x=x/10;
            }

            sort(a1,a1+6);
            sort(a2,a2+6);

            for(k=0; k<6; k++)
            {
                if(a1[k]!=a2[k])
                {
                    cnt=1;
                    break;
                }
            }

            if(cnt==0)
                if(p%2==0){
                   v.push_back(p);
                c++;
            }

            for(k=0; k<v.size(); k++)
                if(k%2==0)
                   cout<<v[k]<<endl;

            cnt=0;
        }
        }
    }
    cout<<endl<<c<<endl;
}
