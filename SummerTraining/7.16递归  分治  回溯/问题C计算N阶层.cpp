#include<stdio.h>
long long fun(int n){
  if(n == 1)
  return 1;
  else
  return n*fun(n-1);
}
int main(){
  long long b;
  while(~scanf("%lld",&b)){
    printf("%lld\n",fun(b));
  }
  return 0;
}
