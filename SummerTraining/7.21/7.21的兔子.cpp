#include<iostream>
#include<cstring>
using namespace std;
string s;
int m;
long long int L1,R1,L2,R2;
int biji(int L1,int R1,int L2,int R2){
	if(L1>R1){
	int t= R1;
	R1=L1;
	L1=t;
	}
	if(L2>R2){
	int a= R2;
	R2=L2;
	L2=a;
	}
	return 0;
}
string a,b;

int main(){
		cin >> s;
	cin >> m;
	while(m--){
	scanf("%lld%lld%lld%lld",&L1,&R1,&L2,&R2);
	biji;
	a = s.substr(L1,R1-L1);
	b = s.substr(L2,R2-L2);
	if(a == b) {
		cout << "Yes"<< endl;
	}else  cout << "No" << endl;
	 }
	return 0;
}

