#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,kk=1,n,m;
    string sa[110],s;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        int pos=0;
        int i;
        for(i=1; i<=n; i++)
        {
            cin>>s;
            if(s=="LEFT")
            {
                sa[i]=s;
                pos--;
                cout<<pos<<" ";
            }
            else if(s=="RIGHT")
            {
                sa[i]=s;
                pos++;
                cout<<pos<<" ";
            }
            else
            {
                cin>>s;
                cin>>m;
                if(sa[m]=="LEFT")
                {
                    sa[i]=sa[m];
                    pos--;
                    cout<<pos<<" ";
                }
                else
                {
                    sa[i]=sa[m];
                    pos++;
                    cout<<pos<<" ";
                }
            }
        }
        //cout<<pos<<endl;

    }

return 0;
}

