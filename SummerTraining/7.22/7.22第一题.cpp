#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int num[10000+5];
/*int find(int root){
	int son,temp;
	son = root;
	while(root!= num[root]){			//上级不是掌门？？？或者root 
		root = num [root];
	}
	while(son != root){				//找上面那个的上级，直到最后的根 
		temp = num[son];
		num[son] = root;
		 son = temp;
	}
	return root;
}*/
int find(int x){			//find的递归版 
	if( x == num[x]) return x;
	else return num[x] = find(num[x]);
}
void un(int root1 ,int root2){
	int x,y;
	x = find(root1);
	y = find(root2);
	if(x != y){
		num[x] = y;
	}
} 
int main (){
	int n,m;
	int mi,mj;
	while(cin >> n >> m){
		int t= 0;
	for(int i =1; i <= n; i++){		//初始化 
		num[i] = i;
	}
	n--;			/*  */ 
	if(n == 0){
		cout << endl;
	} 
	else{
	for(int j = 0; j<m ; j++){
	cin  >> mi>> mj;
	if(find(mi)!= find(mj)){
	un(mi,mj);
	n--;
	}

}
	cout << n<< endl;
	
}
	}
	
	return 0;
} 
