#include <iostream>
#include <cstdio>
using namespace std;
typedef long long LL;
int main() {
  int T;
  scanf("%d", &T);
  while(T--) {
    LL a, b, yushu;
    scanf("%lld %lld", &a, &b);
    LL chushu, beichushu;
    beichushu = max(a, b);
    chushu = min(a, b);
    //int flag = 0;
    yushu = beichushu % chushu;
    while (yushu != 0) {
      //if(flag = 0)
       {
        beichushu = chushu;
        chushu = yushu;
        yushu = beichushu % chushu;
      }
      //flag = 1;
    }
    printf("%lld %lld\n", chushu, a * b / chushu);
  }
  return 0;
}
/*
#include<iostream>
#include<cstdio>
using namespace std;
typedef long long LL;

int main(){
    int T;
    cin>>T;
    while(T--){
    LL a,b;
    cin>>a>>b;


    LL chushu,beichu;
    beichu=max(a,b);
    chushu=min(a,b);
    LL yushu=beichu%chushu;
    while(yushu!=0){

        beichu=chushu;
        chushu=yushu;
        yushu=beichu%chushu;

    }
    cout<<chushu<<" "<<a*b/chushu<<endl;

    }

    return 0;
}
*/
