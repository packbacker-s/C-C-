#include<iostream>
using namespace std;
int n,h[10000];
int main(){
	cin >> n;
	for(int i = 0;i < n; i++){
		cin >> h[i];
	}
	int temp = 0;	int t = 0;
	for(int i = 0 ;i < n; i++){
		for(int j =i+1; j < n ;j+=n){
			if(h[i] > h[j]){
				temp++;
				t += temp;
			}
		}
	}
	cout << t <<endl;
	return 0;
}
