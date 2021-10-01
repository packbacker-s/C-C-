#include "stdio.h"
#include "math.h"
int main(){
  int T;
  int a,b,c;
  double S,p,x,y,z;
  scanf("%d",&T);
  while(T--){
  scanf("%d%d%d",&a,&b,&c);
    p=(a+b+c)/2.0;
    x=p-a;
    y=p-b;
    z=p-c;
    if (a+b>c && a+c>b && b+c>a){
      S=sqrt(p*x*y*z);
      printf("%.3lf\n",S);
      printf("\n");
    }
    else{
    	printf("-1\n");
    printf("\n");
	}

  }

  return 0;
}
