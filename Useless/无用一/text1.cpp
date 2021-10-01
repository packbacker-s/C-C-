#include<stdio.h>

#define maxn 10001

int n,a[maxn];
int i, j;
int main(){
	while(scanf("%d",&n)!=EOF){
		for( i = 0; i < n;i++){
			scanf("%d",&a[i]);
		}


		for(i = 0; i < n;i++){
			for( j = 0; j< n-1-i;j++){
				if (a[j]> a[j+1]){
					int temp = a[j];
					a[j] = a[j+1];
					a[j+i] = temp;
				}
			}
		}
    
		for( i = 0; i < n;i++){
			printf("%d ",a[i]);
		}
	}

	return 0;
}

电信186  熊显辉 2020/4/10 14:42:17
