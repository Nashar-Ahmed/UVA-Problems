#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    getchar();
    while(tst--)
    {
        int i,j,n,x,sum=0,dis=0;
        int a[110]={0};
        string str;

        cin>>n;
        getchar();

        for(i=1; i<=n; i++)
        {
            getline(cin,str);

            if(str=="LEFT")
            {
                a[i]=-1;
                dis--;
            }

            else if(str=="RIGHT")
            {
                a[i]=1;
                dis++;
            }

            else
            {
                x=str[8] - 48;
                a[i]=a[x];
                if(a[x]==-1)
                    dis--;
                else
                    dis++;
            }
        }
        /*for(i=1; i<=n; i++)
        {
            sum=sum+a[i];
        }*/

        cout<<dis<<endl;
    }
    return 0;
}
