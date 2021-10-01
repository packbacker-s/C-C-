#include "stdio.h"
int add(int A,int B)
{
  int sum;
  sum=A+B;
  return sum;
}
int main()
{
  int a,b;
  while (scanf("%d %d", &a, &b) != EOF)
  printf("%d\n",add(a,b));
	return 0;
}
