#include <bits/stdc++.h>
#define maxn 100000+7
typedef struct {
	int x, y;
}node;
int n, m;
node value[maxn];
double change(int x, int y, int n){
  int maxlen = abs(x) > abs(y) ? abs(x) : abs(y);
	int num = maxlen;
	double base = 8;
	double ans = n * n * 1.0;
	int cnt = 0;
	while(num--) {
		ans -= base;
		base *= 2;
		cnt++;
	}
	if(x == cnt) {
		ans += cnt - y;
	}
	if(y ==- cnt && x != cnt){
		ans += 2 * cnt;
		ans += cnt - x;
	}
	if(x ==- cnt && y !=- cnt){
		ans += 4 * cnt;
		ans += y + cnt;
	}
	if(y == cnt && x !=- cnt && x != cnt){
		ans += 6 * cnt;
		ans += cnt + x;
	}
	return ans;
}
int get_digit(int a){
	int ret = 0;
	int t = a;
	while(t) {
		ret += t % 10;
		t /= 10;
	}
	return ret;
}
node num_ch(int x, int y) {
	 node tmp;
	 tmp.y = y - n / 2 - 1;
	 tmp.x = x - n / 2 - 1;
	return tmp;
}
int get_ans(int x1, int x2, int y1, int y2) {

	int ret = 0;
	int i;
	for(i = 0; i < m; i ++){
		if(value[i].x <= x2 && value[i].x >= x1 && value[i].y >= y1 && value[i].y <= y2) {
			int tmp = change(value[i].x, value[i].y,n);
			ret += get_digit(tmp);
		}
	}
	return ret;
}
int main()
{

	int t;
	scanf("%d\n", &t);
	while(t--) {
		int p;
		scanf("%d %d %d", &n, &m, &p);
		int i;
		for(i = 0; i < m; i ++) {
			node temp;
			scanf("%d %d", &temp.x, &temp.y);
			value[i] = num_ch(temp.x, temp.y);
		}
		for(i = 0; i < p; i ++) {
			int x1, x2, y1, y2;
			scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
			int ans = get_ans(x1 - n / 2 - 1, x2 - n / 2 -1, y1 - n / 2 - 1, y2 - n / 2 - 1);
			printf("%d\n", ans);
		}
	}
	return 0;
}
