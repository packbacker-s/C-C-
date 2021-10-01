#include<stdio.h>
int fun(int n){
  if(n==1)
  return 1;
  else
  return n+fun(n-1);
}
int main(){
  int b;
  while(~scanf("%d",&b)){
    printf("%d\n",fun(b));

  }
  return 0;
}
