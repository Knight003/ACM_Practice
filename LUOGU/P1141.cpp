#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
int n,m;
char mp[1010][1010];
int dp[1010][1010]; //记录每个点的情况的父亲节点
bool vis[1010][1010];
int fx[]={-1,0,0,1};
int fy[]={0,-1,1,0};
int ans[1000*1000 +100];//存储结果
int cnt = 1;
bool check(int x,int y,char k)
{
    if(vis[x][y]==0 && mp[x][y] == k && x>=1 && x<=n && y<=n && y>=1 )
    {
        return 1;
    }
    return 0;
}
int bfs(int x,int y)
{
    int sum = 0;
    queue<pii> que;
    que.push({x,y});
    while (que.size())
    {
        pii now = que.front(); que.pop();
        if(vis[now.first][now.second] )
            continue;
        sum++;
        vis[now.first][now.second]  = 1;
        dp[now.first][now.second] = cnt;
        char k = (mp[now.first][now.second] == '1')?'0':'1';
        for(int i=0;i<4;i++)
        {
            int dx = now.first +fx[i];
            int dy = now.second + fy[i];
            if(check(dx,dy,k))
            {
                que.push({dx,dy});
            }

        }
    }
    ans[cnt++] = sum;
    return sum;
}
int main ()
{
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            scanf(" %c", &mp[i][j]);
    while (m--)
    {

        int x,y;
        scanf("%d %d",&x,&y);
        if( dp[x][y] )
        {
            cout<< ans[ dp[x][y] ]<<endl;
            continue;
        }
        cout<< bfs(x,y)<<endl;
    }
}
