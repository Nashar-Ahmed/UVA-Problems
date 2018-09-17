#include<bits/stdc++.h>
#include<iostream>
using namespace std;


vector<int> graph[50];
map<int,int> mymap;
int index = 0;

int creatgraph(int n)
{
    if(mymap[n] == 0)
    {
        index++;
        mymap[n] = index;
        return mymap[n];
    }
    else
        return mymap[n];
}



int BFS(int s,int w)
{
    queue<int> Q;
    int visited[100] = {0};
    int level[100];
    int res = 0;


    visited[s] = 1;
    level[s] = 0;
    Q.push(s);

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];

            if(visited[v] == 0)
            {
                visited[v] = 1;
                level[v] = level[u] + 1;
                Q.push(v);
                if(level[u] + 1 <= w)
                    res++;
                else
                    return res;
            }
        }
    }
    return res;
}


int main()
{
    int edge,C=0;

    while(cin>>edge)
    {
        if(edge == 0)
           break;

        int i,j,x,y,ans,weight=0,number_node;
        int u,v;

        for(i=0; i<edge; i++)
        {
            cin>>x>>y;
            u = creatgraph(x);
            v = creatgraph(y);
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        number_node = index;
        while(cin>>u>>weight)
        {
            if(u == 0 && weight == 0)
                break;
            x = u;
            u = creatgraph(u);
            ans = BFS(u,weight);
            if(number_node == index)
                ans = number_node - ans - 1;
            else
                ans = number_node;
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++C,ans,x,weight);
        }
        mymap.clear();
        index = 0;
        for(i=0; i<100; i++)
            graph[i].clear();

    }
    return 0;
}
