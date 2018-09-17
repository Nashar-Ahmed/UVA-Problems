#include<bits/stdc++.h>
using namespace std;



string str[210];
map<string, int> mymap;
vector<int> graph[210];

int ind;
int creat(string s)
{
    if(mymap[s] == 0)
    {
        mymap[s] = ind;
        ind++;
        return mymap[s];
    }
    else
        return mymap[s];

}



int call(int u,int v)
{
    string str1,str2;
    int flag = 0;
    int i,j,x,y,cnt = 0;


    str1 = str[u];
    str2 = str[v];
    if(str1.size() == str2.size())
    {
        for(i=0; i<str1.size(); i++)
            if(str1[i] == str2[i])
               cnt++;
        if(cnt == (str1.size()-1) )
            flag = 1;
    }

    return flag;
}


int bfs(int s,int e)
{
    int level[210];
    int visited[210] = {0};
    queue<int> Q;

    Q.push(s);
    visited[s] = 1;
    level[s] = 0;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        if(u == e)
            return level[e];

        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];

            if(visited[v] == 0)
            {
                visited[v] = 1;
                level[v] = level[u] + 1;
                Q.push(v);
            }
        }
    }
    return level[e];
}




int main()
{
    ind = 0;
    int test;
    cin>>test;
    getchar();
    while(test--)
    {
        string str1,str2;
        int i=0,r,flag=0,len,j,u,v,ans;
        while(cin>>str1){
            if(str1 == "*")
               break;
            str[i++] = str1;
            r = creat(str1);
        }

        getchar();

        len = i;
        for(i=0; i<len; i++)
        {
            for(j=0; j<len; j++)
            {
                if(i != j)
                {
                    flag = call(i,j);
                    if(flag == 1){
                        graph[i].push_back(j);
                    }
                }
            }
        }







        string str3;

        while(getline(cin,str3)  &&   str3.size() != 0){
        str1.clear();
        str2.clear();

        for(i=0; str3[i]!=' '; i++)
        {
            str1+=str3[i];
        }
        j = i;
        for(i=j+1; i<str3.size(); i++)
            str2+=str3[i];


        u = mymap[str1];
        v = mymap[str2];
        ans = bfs(u,v);
        cout<<str1<<" "<<str2<<" "<<ans<<endl;
        }


        if(test != 0)
           cout<<endl;
        ind 0;
        mymap.clear();
        for(i=0; i<205; i++)
            graph[i].clear();
    }
    return 0;
}
