#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<list>
using namespace std;
int main(){
  char a[100];
  while(gets(a)!=NULL){

    int len;
    len=strlen(a);
  list <char> lst1 (a, a+len);
  lst1.remove('5');
  list <char> :: iterator p;
  for(p = lst1.begin(); p != lst1.end(); p ++ )
  cout << *p;
  cout << endl;
 }

  return 0;
}
