#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    getchar();
    while(tst--)
    {
        int i,j,cnt1=0,cnt2=0,l;
        string str;

        getline(cin,str);
        l=str.size();

        for(i=0; i<l; i++)
        {
            if(str[i]=='M')
                cnt1++;
            else if(str[i]=='F')
                cnt2++;
        }

        if(cnt1==cnt2 && cnt1>1)
            cout<<"LOOP\n";
        else
            cout<<"NO LOOP\n";
    }
    return 0;
}
