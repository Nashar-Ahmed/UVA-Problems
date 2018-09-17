#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    getchar();
    getchar();

    while(tst--)
    {
        map<string,int>mymap;
        map<string,int>::iterator it;

        string str;
        int i,j=0,l,cnt=0,x;
        double den;

        while(getline(cin,str))
        {
            l=str.size();
            if(l==0)
                break;
            mymap[str]=mymap[str]+1;
            cnt++;
        }
        for(it=mymap.begin(); it!=mymap.end(); ++it)
        {
            x=it->second;
            den=(x*100.0)/cnt;
            cout<<it->first;
            printf(" %.4lf\n",den);
        }
        if(tst>0)
           cout<<endl;

    }
    return 0;
}
