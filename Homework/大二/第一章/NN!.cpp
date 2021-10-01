#include <cstdio>
#include <iostream>
int main() {
    int a[20001];//储存每一位所得到的数
    int temp, digit, n;  //temp为结成
    while(scanf("%d", &n) != EOF) {
        a[0] = 1;//从1开始乘
        digit = 1;//位数从第一位开始
        for(int i = 2; i <= n; i++) {
            int num = 0;
            for(int j = 0; j < digit; j++) {   //从低位到高位
                temp = a[j] * i + num;//将一个数的每一位利用数组进行存储
                a[j] = temp % 10;//将一个数的每一位利用数组进行存储
                num = temp / 10;
            }
            while(num) { //如果有进位
                a[digit] = num % 10;//新加一位 添加信息  位数加1
                num = num / 10;      //判断是否还能进位
                digit++;
            }
            for(int i = digit - 1; i >= 0; i--)
            printf("%d", a[i]);
            printf("\n");
        }
    }

    return 0;
}
