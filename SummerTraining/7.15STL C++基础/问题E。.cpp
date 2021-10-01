#include<vector>
#include<iostream>
#include<cstdio>
#include <cstring>
#include<set>
using namespace std;
int main(){
  int n;
  int a;
  set <int> v;
  while(cin >>n){
    for( int i = 0; i < n; i++){
      cin >> a;
      v.insert(a);

    }
    set <int> :: iterator p;
    for(p = v.begin(); p != v.end(); p ++){
      if(p != v.begin()) cout <<' ';
      cout << *p;
    }
    v.clear();
    cout << endl;
  }
}
