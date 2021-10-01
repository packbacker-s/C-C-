
//#include<iostream>
#include<stdio.h>
//using namespace std;
const int maxn=10000+5;
long long int a[maxn];
int main()
{
  a[1]=1;
  a[2]=2;

  int n;
  while(~scanf("%d",&n)){
    for(int i=3;i<53;i++){
      a[i]=a[i-1]+a[i-2];
      //printf("%d",a[n]);
    }
    printf("%lld\n",a[n]);
  }
  return 0;
}
