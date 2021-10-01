#include<iostream>
using namespace std;
int main() {
    int n, sum=0, a[100];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int j=2;j<=n;j+=2)
        sum=sum+a[j];
    cout<<sum<<endl;
    return 0;
}




#include <iostream>
using namespace std;
int main() {
  int n;
  int a[100];
  int sum = 0;
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >>a[i];
  }
  for(int j = 2; j <= n; j+=2) {
    sum = sum + a[j];
  }
  cout << sum << endl;
  return 0;
}
