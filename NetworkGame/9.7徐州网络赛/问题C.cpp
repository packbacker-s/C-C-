#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int  weight;
  while(cin >> weight) {
    int flat = 0;
    for(int i = 1; i < weight; i++) {
      int shengxia = weight - i;
      if(i % 2 == 0 && shengxia % 2 == 0){
        flat = 1;
        break;
      }
    }
    if(flat = 1)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;
  }
  return 0;
}/*
#include<iostream>
using namespace std;
int main(){
	int w;
	cin>>w;
	int flag=0;
	if(w%2==0){
		for(int i=2;i<w;i+=2){
		if((w-i)%2==0){
			flag=1;
			break;
		}
		}
	}
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";

	return 0;
}

/*#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int  weight;
  cin >> weight;
  if(weight%2==0&&weight!=2)
  cout << "YES" << endl;
  else
  cout << "NO" << endl;
  return 0;
}
*/
