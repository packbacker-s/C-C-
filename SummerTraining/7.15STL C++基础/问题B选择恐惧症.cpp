#include<iostream>
#include<list>
#include<cstdio>
using namespace std;
int main(){
  int n,m;
  list <int> s;
  
  while(~scanf("%d %d",&n,&m)){
    if(n == 0 && m == 0)
      break;
    s.clear();
    for(int i = 0; i <= n; i++){
      s.push_back(i);
    }
    list <int> :: iterator it=s.begin();
    while (s.size() > 1) {
      for(int i = 0; i < m; i ++){
        it ++;
        if(it == s.end())
        it = s.begin();
      }
      it = s.erase(it);
      if(it == s.end())
      it = s.begin();

    }
    printf("%d\n",s.front());
  }
  return 0 ;

}
