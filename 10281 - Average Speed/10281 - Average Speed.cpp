#include<bits/stdc++.h>
using namespace std;
int timecount(string str)
{
    long long int h,m,s;
    h=(str[0]-48)*10 + (str[1]-48);
    m=(str[3]-48)*10 + (str[4]-48);
    s=(str[6]-48)*10 + (str[7]-48);
    return (h*3600+m*60+s);
}

double speedcount(string str)
{
    long long int i;
    long long int x=0,l;

    l=str.size();

    for(i=8; i<l; i++)
    {
        if(str[i]!=' ')
        {
            while(i<l)
            {
                x=x*10 + (str[i]-48);
                i++;
            }
        }
    }


    return x;
}

int main()
{
    string str;
    long long int T,sum=0,t1=0,t2=0;
    double speed=0;
    double s=0;

    getline(cin,str);
    t1=timecount(str);
    s=0;
    if(str.size()>8){
        speed=speedcount(str);
        speed=speed/3600;
    }
     else{
            cout<<str;
            printf(" %.2lf km\n",s);
    }
    while(getline(cin,str))
    {

        t2=timecount(str);
        T=t2-t1;
        s=s+(speed*T);

        if(str.size()>8){
            speed=speedcount(str);
            speed=speed/3600;
        }
        else{
            cout<<str;
            printf(" %.2lf km\n",s);
        }

        t1=t2;
    }
    return 0;
}
