#include<bits/stdc++.h>
using namespace std;

vector<int> graph[1000006];

int main()
{
    int test,n;

    while(scanf("%d",&n) == 1)
    {
        int i,j,x,y,ans;

        for(i=1; i<=n; i++)
        {
            string str;
            int u=0,v=0;
            cin>>str;

            for(i=0; i<str.size(); i++)
            {
                if(str[i] >= '0' && str[i] <='9')
                    u = u*10 + str[i]-48;
                else
                    break;
            }
            j = i;
            for(i=j; i<str.size(); i++)
            {
                if(str[i] >= '0' && str[i] <='9')
                    v = v*10 + str[i]-48;
                else if(v != 0)
                {
                    graph[u].push_back(v);
                    v = 0;
                }
            }

            for(i=1; i<=n; i++)
            {
                cout<<i<<endl;
            }

        }
    }
}
