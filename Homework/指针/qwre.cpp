#include<stdio.h>
main()
{
  int a;
  float b;
  double c;
  char d;
  int *p1;
  float *p2;
  double *p3;
  char *p4;
  p1=&a;
  p2=&b;
  p3=&c;
  p4=&d;
  scanf("%d,%f,%lf,%c",p1,p2,p3,p4);
  printf("%d,%f,%lf,%c",*p1,*p2,*p3,*p4);
}
