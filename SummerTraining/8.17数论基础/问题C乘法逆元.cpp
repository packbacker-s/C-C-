#include <iostream>
#include <cstdio>
using namespace std;
typedef long long LL;
const int p = 19260817;
LL npow(LL n, LL x, LL mod){
  LL ans = 1;
  for(int i = 0; i < x; i++) {
    ans = ans * n % mod;
  }
  return ans;
}
int main() {
  int T;
  scanf("%d", &T);
  while(T --) {
    LL n;
    scanf("%lld", &n);
    LL x = n;
    for(int i = 2; i <= p - 2; i++) {
      x = (n * x) % p;
    }
    printf("%lld\n", x);
  }
  return 0;
}
/*#include<iostream>
#include<cstdio>
using namespace std;
typedef long long LL;
const int p=19260817;
int main(){
    int T;
    cin>>T;
    while(T--){
        LL a;
        cin>>a;
        LL x=a;
        for(int i=2;i<=p-2;i++){
            x=(a*x)%p;
        }
        cout<<x<<endl;
    }
    return 0;
} */
