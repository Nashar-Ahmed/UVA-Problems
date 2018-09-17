#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        int i,j,x,y,g,r,acc,m;
        string str[20];
        string s1,s2;
        map <string, int> give;
        map<string, int> rece;
        map<string,int>::iterator it,it2;

        for(i=0; i<n; i++)
            cin>>str[i];


        for(i=0; i<n; i++)
            give[str[i]]+=0;
        for(i=0; i<n; i++)
            rece[str[i]]+=0;




        for(i=0; i<n; i++)
        {
            cin>>s1>>acc>>m;
            give[s1]+=acc;

            if(m!=0)
               x=acc/m;

            for(j=0; j<m; j++)
            {
                cin>>s2;
                rece[s2]+=x;
            }
            rece[s1]+=(acc - (x*m));
        }


        cout<<endl;
        for(i=0; i<n; i++)
        {
            x=rece.find(str[i])->second - give.find(str[i])->second;
            //cout<<rece.find(str[i])->second<<"             "<<give.find(str[i])->second<<endl;
            cout<<str[i]<<" "<<x<<endl;
        }

    }

    return 0;
}
