#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxn 1005
#define INF 0x3f3f3f3f
#define men(a) memset(a, 0, sizeof a)
int map[maxn][maxn];
int dis[maxn], check[maxn]; 
void init_map (int n,int m){
	for(int i= 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			map[i][j] = INF;
		}
	}
	int a,b ,c;
	for(int i = 0; i < m;i++){
		cin >> a >> b >> c;
		if(map[a][b] >c){
			map[a][b] = map[b][a] = c;
		}
	}
}
int dijkstra(int n,int m){			//先初始化，源点从 1到n的i 的长度 
	men (check); men(dis);
	for(int i =1 ;i <= n; i++){
		dis[i] = map[1][i];
	}
	check [1] = 1 ;dis[1] = 0;
	int minx = 0,pos;
	for(int i = 1; i < n;i++){		//查找当前点中最短且为访问的点 
		minx = INF;
		for(int j = 1; j <= n; j++){
			if(!check [j] && minx > dis[j]){
				minx = dis[j];
				pos = j;
			}
		}
		check [pos] = 1;			//更新所有的未加入的s的值 
		for(int j = 1; j<= n;j++){  // 如果结点达到该结点路径较短，则更新 
			if(!check [j] && dis[j] > dis[pos] + map[pos][j]){
				dis[j] = dis[pos] + map[pos][j]; 
			}
		}
	}
	return dis[n];
}
int n,m; 
int main(){
	cin  >> n >>m;
	init_map(n,m);
	
	cout <<   dijkstra(n,m)<< endl;
	return 0;
} 
