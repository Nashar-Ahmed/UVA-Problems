#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int ctr=1;

    while(cin>>str)
    {
        cout<<"Case "<<ctr<<":"<<endl;
            ctr++;
        int tst,a,b,i,j,cnt=1,t;
        char c;
        cin>>tst;

        while(tst--)
        {
            cin>>a>>b;
            if(a>b)
            {
                t=0;
                t=a;
                a=b;
                b=t;
            }
            c=str[a];
            for(i=a; i<=b; i++)
            {
                if(str[i]!=c)
                {
                    cout<<"No\n";
                    cnt=0;
                    break;
                }
            }

            if(cnt!=0)
                cout<<"Yes\n";
            cnt=1;

        }
    }
}
