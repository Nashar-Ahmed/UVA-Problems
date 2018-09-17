#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   while(cin>>n && n!=0)
   {
        map<string,int>mymap;
        map<string,int>::iterator it;

        int a[11111];
        int i,j,k,cnt=0,value;
        string str[5];
        while(n--)
        {
            cin>>str[0]>>str[1]>>str[2]>>str[3]>>str[4];

            for(i=0; i<5; i++)
            {
                mymap[str[i]]=mymap[str[i]]+1;
            }
        }




   }

}
