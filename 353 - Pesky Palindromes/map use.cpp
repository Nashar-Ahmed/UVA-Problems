#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;

    int i,j,l,m;
    cin>>str1;

    map<string , int> mymap;
    map<string , int>::iterator it;

    l=str1.size();
    for(i=0; i<l; i++)
    {
        str2+=str1[i];
        mymap[str2]=mymap[str2]+1;
    }

    for(it=mymap.begin() ; it!=mymap.end(); it++)
        cout<<it->first<<" "<<it->second<<endl;
}
