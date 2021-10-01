#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=100+8;
char oil[maxn][maxn];//油田数
int vis[maxn][maxn];//标记
int cnt;//连通数
int n,m;
void dfs(int x,int y)
{
  if(x<0||x>=n||y<0||y>=m)return;//出界
  if(oil[x][y]!='@'||vis[x][y])return;  //不是油田、已标记
  vis[x][y]=1;                          //标记
  for(int i=-1;i<=1;i++) {
    for(int j=-1;j<=1;j++) {
    if(i||j)
    dfs(x+i,y+j);
    }
  }
}
int main() {
  while(scanf("%d %d",&n, &m)==2&&n&&m){
    memset(vis,0,sizeof(vis));
    cnt=0;
    for(int i=0;i<n;i++)
    scanf("%s",oil[i]);
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(oil[i][j]=='@'&& !vis[i][j]){
          dfs(i,j);
          cnt++;
        }
      }
    }
    printf("%d\n",cnt);
  }
  return 0;
}
