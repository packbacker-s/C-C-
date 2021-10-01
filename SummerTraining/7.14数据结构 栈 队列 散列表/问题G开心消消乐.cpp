#include <stdio.h>
#include <stack>
using namespace std;
int main()
{
	int n;
	stack<int> s;  //栈

	while (~scanf("%d", &n)) {
		int sum = 0;
		int temp;
		for (int i = 0; i < n; ++i) {
			scanf("%d", &temp);
			if (s.empty()) {
				s.push(temp);
			}else {
				if (temp == s.top()) {
					sum++;
					s.pop();
				}else s.push(temp);
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}
