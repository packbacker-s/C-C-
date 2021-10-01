#include<stdio.h>
main(){
  int i;
  int *p;
  p=&i;
  *p=17;
  printf("%d\n",i);
}
