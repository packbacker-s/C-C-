#include <iostream>
#include <cstring>
#include <cstdio>
#include <time.h>
#include <stdlib.h>
using namespace std;
char s[1000010], p[1000010];
  void cal_next(char *str, int *next, int len) {
    next[0] = -1; // next[0]初始化为-1，-1表示不存在相同的最大前缀和最大后缀
    int k = -1; // k初始化为-1
      for (int q = 1; q <= len-1; ++q) {
        while (k > -1 && str[k+1] != str[q]) {
          // 如果下一个不同，那么k就变成next[k]，注意next[k]是小于k的，无论k取任何值。
            k = next[k]; // 往前回溯
        }
        if (str[k + 1] == str[q]) {
            // 如果相同，++k
            ++k;
        }
        // 把算的k的值（就是相同的最大前缀和最大后缀长）赋给next[q]
        next[q] = k;
    }
}
long long KMP(char *str, int slen, char *ptr, int plen) {
    long long int sum = 0;
    int *next = new int[plen];
    cal_next(ptr, next, plen); // 计算next数组
    int j = -1;
    for (int i = 0; i < slen; i++) {
        while (j > -1 && ptr[j + 1] != str[i]) {
            // ptr 和 str 不匹配，且 j > -1（表示 ptr 和 str 有部分匹配）
            j = next[j]; // 往前回溯
        }
        if (ptr[j + 1] == str[i])
            j = j + 1;
        if (j == plen-1) {
            ++sum;
            j = next[j];
        }
    }
    // return -1;
    return sum;
}
int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        scanf("%s%s", p, s);
        printf("%lld\n",KMP(s, (int)strlen(s), p, (int)strlen(p)));
    }
    return 0;
}
