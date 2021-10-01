#include<iostream>
using namespace std;
#define maxn 1000007
int n,i;
long double p[maxn],sum = 0.0;
int main(){
	scanf("%d",&n);
	for( i = 1; i <= n;i++){
		scanf("%lf",p[i]);
	}
	for( i = 1; i <=n;i++){
		sum +=1/(1+p[i]);
	
	if(sum < 1) 		//1/(1+p[1])+1/(1+p[2])  < 1  ³ÉÁ¢ 
	printf("%d",i);}
	return 0;
}
