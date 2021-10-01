#include<iostream>
#include<cstring>
using namespace std;
int n;
int next1[10000];
string a,s;
int main(){
	cin >> n; 
	while(n--){
		cin >> a;
	}
	cin >> s;
	int cnt=0;
	int alen = a.size();
	
    next1[0] = -1;
    int k = -1, j = 0;
    for(int i = 0; i<n ;i++){
	 while (j < alen - 1)
    {	
        if (k == -1 || a[j] == a[k])
        {
            j++;
            k++;
            if (a[j] != a[k]){
			 next1[j] = k;
}
            else{
                next1[j] = next1[k];
			}
        }
        else
        {
            k = next1[k];
        }
    }
	int slen = s.size();
	int x = 0;j = 0;
	while(x< slen){
			
	}
    
	cout <<cnt <<endl;
	}
   
	return 0;
}
