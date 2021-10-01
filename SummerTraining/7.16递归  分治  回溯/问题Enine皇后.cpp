#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
int row[9];
int flag = 0;
void nqueen(int now){
    if (flag) return ;
    if(now == 10 ){
      flag = 1;
        for(int i = 1; i <= 9; i++){
            cout << row[i];
            if(i < 9) cout << ' ';
        }
        cout << endl;
        return;
    }
    int j;
    for(int i = 1; i <= 9; i++){
        for(j = 1; j < now; j++){
            if(i == row[j] || abs(now - j) == abs(i - row[j]))
                break;
        }
        if(j == now){
            row[now] = i;
            nqueen(now + 1);
        }
    }
}

int main()
{
    nqueen(1);
    return 0;
}
