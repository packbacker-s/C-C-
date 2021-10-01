#include<bits/stdc++.h>
using namespace std;
const int maxn =100007;
struct obj{
  long long int hp;
  long long int atk;
  long long int cnt;
  double num;
}a[maxn];

bool cmp(obj x,obj y){
  if(x.num!=y.num)
  return x.num<y.num;
  else
  return x.atk>y.atk;
}
int main(){
  int T;
  scanf("%d",&T);
  for(int m=1;m<=T;m++){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%lld%lld",&a[i].hp,&a[i].atk);
      a[i].cnt=0;
      for(int j=1;;j++){
        a[i].hp-=j;
        a[i].cnt++;
        if(a[i].hp<=0)
        break;
      }
      a[i].num=1.0*a[i].cnt/a[i].atk;
    }
    sort(a,a+n,cmp);
    long long int sum=0;
    long long int ret=0;
    for(int i=0;i<n;i++){
      sum+=a[i].atk*ret;
      ret+=a[i].cnt;
      sum+=a[i].atk*a[i].cnt;
    }
    printf("Case #%d: %lld\n",m,sum);

  }
  return 0;
}
