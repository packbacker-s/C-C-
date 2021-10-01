#include <bits/stdc++.h>
using namespace std;
#define maxn 10000
struct node {
	int u, v, w;
	int next;
} edge[maxn];
int head[maxn];
int cnt;
void add(int u, int v, int w)
{
	edge[cnt].u = u;
	edge[cnt].v = v;
	edge[cnt].w = w;
	edge[cnt].next = head[u];
	head[u] = cnt++;
}
int main()
{
	memset(head, -1, sizeof head);
	int n, t;
	cin >> n >> t;
	int u, v, w;
	cnt = 0;
	for (int i = 0; i < t; i++) {
		cin >> u >> v >> w;
		add(u, v, w);
	}
	cout << endl;
	cin >> u;
	for (int i = head[u]; ~i; i = edge[i].next) {
		cout << i << endl;
		cout << edge[i].u << " " << edge[i].v << " " << edge[i].w << endl;
	}
	return 0;
}
