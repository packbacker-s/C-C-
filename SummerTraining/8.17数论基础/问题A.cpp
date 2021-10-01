/*#include <iostream>
#include <cstdio>
using namespace std;
typedef long long LL;
int main() {
  LL T;
  while(~scanf("%lld", &T)) {
    int t;
    for(LL i = 2; i*i <= T; i++) {
      if(T % i == 0) {
      //  printf("%d\n", i);
        int cnt = 0;
        while(T % i == 0) {
          T /= i;
          cnt ++;
        }
        printf("%lld^%d\n", i, cnt);
        cout << T << " = " << i <<"^"<<cnt << endl;
      }
    }
  }
  return 0;
}
/*#include <iostream>
#include <cstdio>
using namespace std;
typedef long long LL;
int main() {
  int T;
  cin >> T;
  while (T--) {
    LL n;
    cin >> n;
    for(LL i = 2; i*i <= n; i++) {
      if(n % i == 0) {
        cout << i;
        int cnt = 0;
        while (n % i == 0) {
          n /= i;
          cnt ++;
        }
        cout << n << " = " << i^cnt << endl;
      }
    }
  }
  return 0;
}
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        cout<<n<<" = ";
        int flag=0;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                int cnt=0;
                while(n%i==0){
                    n/=i;
                    cnt++;
                }

                if(flag==1)
                cout<<" * ";


                if(cnt==1)
                cout<<i;

                else
                cout<<i<<"^"<<cnt;



                flag=1;
            }
        }

        cout<<endl;

    }

    return 0;
}
