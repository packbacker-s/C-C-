#include <stdio.h>
#define N 100
#include <string.h>
struct renyuan {
	char name[10];
	float tiwen;
	int zhuangtai;
};


int main() {
  void panduan();
	int i;
	struct renyuan ren[N], *p = ren;
	for(i = 0; i < N; i++, p++) {
		scanf("%s, %f, %d", p->name, &p->tiwen, &p->zhuangtai);
		if(strcmp(p->name,"#") == 0)
		break;
	}
	panduan();
	return 0;
}

struct renyuan ren[N], *p=ren;
void panduan() {
  int i;
  for(i = 0; i < N; i++, p++) {
	if(p->tiwen>37.0) {
	printf("%s, %f, %d", p->name, p->tiwen, p->zhuangtai);
    }
  }
}
