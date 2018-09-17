#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int row,col;
int visited[1001][1001];
int fx[] = {1,-1,0,0};
int fy[] = {0,0,1,-1};
int level[1001][1001];

bool valid(int x,int y)
{
    if(x>=0 && x<row && y>=0 && y<col)
        return 1;
    else
        return 0;
}



int BFS(int sx,int sy,int ex,int ey)
{
    queue<pii> Q;

    Q.push(pii(sx,sy));
    level[sx][sy] = 0;
    while(!Q.empty())
    {
        pii u;
        u = Q.front();
        Q.pop();
        if(u.first == ex && u.second == ey)
            return level[ex][ey];

        for(int k=0; k<4; k++)
        {
            int tx,ty;
            tx = u.first + fx[k];
            ty = u.second + fy[k];

            if(visited[tx][ty] == 0 && valid(tx,ty))
            {
                visited[tx][ty] = 1;
                level[tx][ty] = level[u.first][u.second] + 1;
                Q.push(pii(tx,ty));
            }
        }
    }

    return level[ex][ey];
}



int main()
{
    while(cin>>row>>col && row && col)
    {
        int i,j,x,y,z,n,r,c,sx,sy,ex,ey;
        int a,b,ans;
        memset(visited, 0, sizeof(visited));
        cin>>n;
        while(n--)
        {
            int num;

            cin>>r>>num;
            for(i=0; i<num; i++)
            {
                cin>>c;
                visited[r][c] = 1;
            }
        }

        cin>>sx>>sy;
        cin>>ex>>ey;

        ans = BFS(sx,sy,ex,ey);
        cout<<ans<<endl;
    }
    return 0;
}
