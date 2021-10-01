//我的玩具在哪的题解
//重点：点与直线的关系
#include<bits/stdc++.h>
using namespace std;
const double eps = 1e-8;
const double pi = acos(-1.0);
const double inf = 1e20;
const int maxn = 5e3+11;
int sgn(double x){
	if(fabs( x ) < 0) return 0;
	if(x < 0) return -1;
	else return 1;
}
struct Point {
	double x,y;
	Point(){};
	Point (double _x,double _y){
		x = _x;y = _y;
	}
	void input(){
		scanf("%lf%lf",&x,&y);
	}
	Point operator - (const Point &b)const {
	return Point(x - b.x,y - b.y);
	}
	double operator ^ (const Point &b) const{
	return x*b.y - y *b.x;
	} 
};
struct Line{
	Point s,e;
	int relation (Point p){
		int c = sgn((p-s)^(p-e));
		if(c < 0) return 1;
		else if(c > 0) return 2;
		else return 3;
	}
};
Line l[maxn];
Point p[maxn];
int sum[maxn];

 int main (){
  	int n,m;
  	double x1,x2,y1,y2;
  	int cnt = 0;
  	memset(sum ,0,sizeof sum);
  	scanf("%d%d%lf%lf%lf%lf",&n,&m,&x1,&y1,&x2,&y2);
  	for(int i = 0 ; i < n ; i++){
  		double u,v;
  		scanf("%lf%lf",&u,&v);
  		l[i].s = Point(u,y1);
  		l[i].e = Point(v,y2);
	  }
	  for(int i = 0; i <m;i++){
	  	double x,y;
	  	scanf("%lf%lf",&x,&y);
	  	p[i] = Point(x,y);
	  }
	  for(int i = 0; i< m;i++){
	  	for(int j = 0 ; j <n;j++){
	  	if(l[j].relation (p[i]) == 1){
	  		sum[j] ++;
	  		continue;
		  } 
	}
  }
  cnt = sum[0];
  for(int i =1; i <n; i++){
  	cnt+= (sum[i] - sum[i-1]);
  }
  sum[n] = m -cnt;
  for(int i = 0; i <= n; i++){
  	if(i >0&& i<n)
  	printf("%d: %d\n",i,sum[i] -sum[i-1]);
  	else printf("%d: %d\n",i,sum[i]);
  }
 	return 0;
 }
