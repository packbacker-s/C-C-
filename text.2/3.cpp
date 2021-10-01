/*#include <stdio.h>
#include <algorithm>
using namespace std;
const int maxn = 1e5 + 2;
void fun(int n) {
  int a[maxn];
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a + n);
  for(int i = n - 1; i >= 0; i--) {
    printf("%d ", a[i]);
}
}
int main() {
  int a;
  scanf("%d\n", &a);
  fun(a);
  return 0;
}
*/
#include<stdio.h>
const int maxn = 1e5 + 6;
void fun(int n) {
  int a[maxn];
  int k;
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(a[i]<a[j])
      {
        k=a[i];
        a[i]=a[j];
        a[j]=k;
      }
    }
  }
  for(int i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}
int main()
{
	int n;
	scanf("%d",&n);
  fun(n);
  return 0;
}
