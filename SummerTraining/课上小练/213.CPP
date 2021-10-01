
#include<stdio.h>
#include<math.h>
float area(int a, int b, int c)
{
    float t,s;
    t = (a+b+c) / 2.0;
    s = (float)sqrt(t*(t-a)*(t-b)*(t-c));     //求得面积
    return s;                                   //返回面积的值
}
int main(){
  int x,y,z,q;
	float w;
	scanf("%d",&q);
  while(q--){
  	scanf("%d%d%d",&x,&y,&z);
	  	if((x+y>z)&&(x+z>y)&&(z+y>x))
		    {
				w=area(x,y,z);
				printf("%.3f\n\n",w);
			}
		else printf("-1\n\n");
	}
}
