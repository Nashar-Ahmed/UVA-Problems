#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
int fx[] = {1,1,2,2,-1,-1,-2,-2};
int fy[] = {2,-2,1,-1,2,-2,1,-1};

bool valid(int x,int y)
{
    if(x>=0 && x<8 && y>=0 && y<8)
        return 1;
    else
        return 0;
}

int BFS(int sx,int sy,int ex,int ey)
{
    int visited[10][10] = {0};
    int level[10][10];
    queue<pii> Q;

    Q.push(pii(sx,sy));
    visited[sx][sy] = 1;
    level[sx][sy] = 0;

    while(!Q.empty())
    {
        pii u;
        u = Q.front();
        Q.pop();
        if(u.first == ex && u.second == ey)
            return level[u.first][u.second];

        for(int k=0; k<8; k++)
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
    int sx,sy,ex,ey,ans;
    char c1,c2;

    while(cin>>c1>>sx>>c2>>ex)
    {
        sy = c1 - 97;
        ey = c2 - 97;

        ans = BFS(sx-1,sy,ex-1,ey);
        printf("To get from %c%d to %c%d takes %d knight moves.\n",c1,sx,c2,ex,ans);
    }
    return 0;
}
