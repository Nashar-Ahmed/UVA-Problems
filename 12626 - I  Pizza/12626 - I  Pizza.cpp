#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    getchar();

    while(tst--)
    {
        int i,j,x,cnt=0,l;
        int a[100]={0};
        string str;
        getline(cin,str);

        l=str.size();
        for(i=0; i<l; i++)
            a[str[i]]++;
        while(1)
        {
            a['A']=a['A']-3;
            if(a['A']<0)
                break;

            a['M']=a['M']-1;
            if(a['M']<0)
                break;

            a['R']=a['R']-2;
            if(a['R']<0)
                break;

            a['G']=a['G']-1;
            if(a['G']<0)
                break;

            a['I']=a['I']-1;
            if(a['I']<0)
                break;

            a['T']=a['T']-1;
            if(a['T']<0)
                break;

            cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}
