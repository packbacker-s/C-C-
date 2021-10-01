#include <cstdio>
long long q_pow(long long a, long long b, long long mod) {
  long long sum = 1;
  int n = 0;
  while (b) {
    if (b & 1)
      sum  = sum * a % mod;
    a = a * a % mod;
    b >>= 1;
    n++;
  }
  printf("%d\n", n);
  return sum;
}
int main(){
  int i,j,k;
  // int n;
  // for(i=0;i<10;i++)
  // scanf("%d",&n);
  long long s = 1000000000 / 3600 / 24;
  int a = 99999999, b = 9999999;
  int c = a * b;
  printf("%d\n", c);
  c %= 100000000;
  printf("%lld\n", s);
  int n = 106, m = 106;
  // long long a = 2, b = 1000000000000000000, c  = 1000000009;
  // a = q_pow(a, b, c);
  printf("%lld\n", a);
  return 0;
}
