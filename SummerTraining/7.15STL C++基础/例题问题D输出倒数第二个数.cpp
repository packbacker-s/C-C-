#include<iostream>
#include<map>
#include<vector>
#include<cstdio>
using namespace std;
int main(){
	int n,x=10;
	int i=0;
	map<int,int> mapS;
  char ch;
  map<char, int> mp;
  for (int i = 0; i < 10; ++i) {
    char ch = 'a';
    mp[ch + i] = i;
  }
  for (int i = 0; i < 10; ++i) {
    char ch = 'a';
    cout <<(char)(ch + i) << " "<<mp[ch + i] << endl;
  }
	while(scanf("%d",&n)){
	i++;
	    mapS[i] = n;
      cout << i << " " << n << " " << mapS[i] << endl;
      ch = getchar();
      if (ch == '\n') break;
    }
  int k = mapS[i-1];
  cout << k << endl;
	return 0;
}
