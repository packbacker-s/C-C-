#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;
const int maxn = 100000 + 5;
int main() {
  int  T;
  ll a[maxn];
  cin >> T;
  while(T--) {
    int n , k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
    //int b = a.strlen();   //n
    int b;
    b = a[k % n];
    cout << b << endl;
  }
  return 0;
}
