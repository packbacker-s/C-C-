#include <stdio.h>
#include <string>
#include <math.h>
void hanio(int n, char A, char B, char C) {  //构造汉诺塔的函数
  if(n == 1)         //n为1时可以直接解决问题， 但需解决n > 4的问题
    printf("move %c to %c\n", A, C);    //当n = 1时，直接从A移动到C
  else {             //当n不为1时
    hanio(n - 1, A, C, B);     //分治处理n - 1个盘子，把A中的n-1个盘子通过C移动到B
    printf("Move %c to %c\n", A, C);   //把最下面的盘子A移动到C
    hanio(n - 1, B, A, C);    //分治处理n - 1个盘子，把B中的n-1个盘子通过A移动到C
  }
}
int main() {
  int n;
  while(~scanf("%d", &n)) {  //多个输入的形式
    int sum;
    sum = pow(2, n) - 1;     //函数为计算(2^n - 1)  所有盘子移动的总次数
    printf("%d\n", sum);
    hanio(n, 'A', 'B', 'C');
  }
  return 0;
}
