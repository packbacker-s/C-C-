
#include <bits/stdc++.h>
using namespace std ;
int vis[1111],pre[1111],m,n;
int find(int x )
{
	if(x!=pre[x])
	return pre[x]=find(pre[x]);
	return x ;
}
void mix(int x , int y)
{
	int dx = find(x);
	int dy = find(y);
	if(dx!=dy)
	{
		pre[dy]=dx;
	}
}
int main()
{
	while(cin>>n>>m&&n!=0)
	{
		int ans ;
		for(int i = 1 ; i<=1110;i++)
		{
			pre[i]=i;
			vis[i]=0;
		}
		for(int i = 1 ; i<=m;i++)
		{
			int a , b ;
			cin>>a>>b;
			mix(a,b);
		}
		for(int i = 1 ; i<=n;i++)
		{
			vis[find(i)]=1;
		}
		ans = 0 ;
		for(int i = 1 ; i<=n;i++)
		{
			if(vis[i])
				ans++;
		}
		cout<<ans-1<<endl;
	}
	return 0;
}
