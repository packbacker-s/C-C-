/*#include <iostream>
#include <cstdio>
using namespace std;
int n, m, k;
int main() {
  int flat = 0;
  int i;
  cin >> m;// 样例个数
  for(int j = 0; j < m; j++) {
    cin >> n;
    for(i = 1; i <= 12; i++) {
      int sum = 1;
      sum *= i;
      if((sum / n) == 0) {
        k = i;
        flat = 1;
        break;
      }
    }
    if(!flat) {

      cout << k << endl;
    }
  }

  return 0;
}
*/#include <iostream>
#include <cstdio>
using namespace std;
int n, m;
int main() {
  int i;

  scanf("%d",&m);// 样例个数
  while(m--) {
    scanf("%d",&n);
    int k;
 long long int sum = 1;
    for(i = 1; i <= 12; i++) {
      sum =sum * i;

    if(sum % n == 0) {
        k = i;
        printf("%d\n",k);
        break;
      }
      else {
      	sum =sum;
	  }
    }
  }

  return 0;
}
