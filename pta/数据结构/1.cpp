#include <iostream>
#include <cstdio>
using namespace std;
int sum(int n, int m) {
    int sum = 0;
    for(int i = n; i <= m; i++) {
        sum += i;
    }
    return sum;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << sum(n, m) << endl;
}
