#include<bits/stdc++.h>
#include<iostream>
using namespace std;


map<string,int> mymap;
map<int,string> mymap1;
int ind = 0;
vector<int> graph[10000];
int parent[10000];




int creatgraph(string str)
{
    if(mymap[str] == 0)
    {
        ind++;
        mymap[str] = ind;
        mymap1[ind] = str;
        return mymap[str];
    }
    else
        return mymap[str];
}



void BFS(int s,int e)
{
    int visited[1000] = {0};
    int level[1000];
    queue<int> Q;
    memset(parent, -1, sizeof(parent));

    Q.push(s);
    level[s] = 0;
    parent[s] = -1;
    visited[s] = 1;

    while(!Q.empty())
    {
        int u;
        u = Q.front();
        Q.pop();
        if(u == e)
            return;

        for(int i=0; i<graph[u].size(); i++)
        {
            int v;
            v = graph[u][i];

            if(visited[v] == 0)
            {
                visited[v] = 1;
                level[v] = level[u] + 1;
                parent[v] = u;
                Q.push(v);
            }
        }
    }
    return;
}


int main()
{
    int n;

    while(cin>>n)
    {
        int i,j,x,y,l;
        string str1,str2;
        vector<int> ans;


        for(i=0; i<n; i++)
        {
            cin>>str1>>str2;
            x = creatgraph(str1);
            y = creatgraph(str2);

            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        cin>>str1>>str2;
        x = creatgraph(str1);
        y = creatgraph(str2);

        BFS(x,y);
        ans.push_back(y);
        while(parent[y] != -1)
        {
            ans.push_back(parent[y]);
            y = parent[y];
        }
        reverse(ans.begin() , ans.end());



        if(ans.size() == 1)
            printf("No route\n");
        else
        {
            cout<<"............"<<endl;
            cout<<mymap1[ans[0]]<<" "<<mymap1[ans[1]]<<endl;
            for(i=2; i<ans.size(); i++)
            {
                cout<<mymap1[ans[i-1]]<<" "<<mymap1[ans[i]]<<endl;
            }
        }

        ind = 0;
        mymap1.clear();
        mymap.clear();
        for(i=0; i<1000; i++)
            graph[i].clear();
        cout<<endl;
    }
    return 0;
}
