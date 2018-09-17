#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    getchar();

    while(t--)
    {
        int i,j,f=0,len;
        char str[10000];
        stack<char>s;

        gets(str);

        len=strlen(str);
        if(str[0]=='\n')
        {
            cout<<"Yes\n";
            continue;
        }
        else if(len==1 || len%2==1)
        {
            cout<<"No\n";
            continue;
        }

        for(i=0; i<len; i++)
        {
            if(str[i]=='(' || str[i]=='[')
                s.push(str[i]);
            else if(str[i]==')' && s.top()=='(' && !s.empty())
                s.pop();
            else if(str[i]==']' && s.top()=='[' && !s.empty())
                s.pop();
            else
                f=1;
        }
        if(s.empty() && f==0)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
