#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
		int n,m,a[15],j,sum=0;
    float ave;
		scanf("%d%d",&n,&m);
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		sort(a,a+n);
		for(j=1;j<=m;j++){
			sum+=a[n-j];
      ave=(sum*1.0)/m;
		}
		printf("%.2f\n",ave);
	}
	return 0;
 }
