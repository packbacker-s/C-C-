#include <iostream>
#include <cstdio>
using namespace std;
void fun(int x, int y);
int main() {
    while(1) {
        int a, b;
        cin >> a >> b;
        fun(a, b);
    //    cout << a << endl << a * b / a << endl;
    }
    return 0;
}
void fun(int x, int y) {
    int m = x;
    int n = y;
    int z = 1;
    while(z) {
        z = x % y;
        x = y;
        y = z;
    }
    cout << x << endl << m * n / x << endl;
}
