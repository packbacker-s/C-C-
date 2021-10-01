#include <iostream>
#include <iomanip>
using namespace std;
int main() {
   cout<<setiosflags(ios::left|ios::showpoint);
   cout.precision(3);       // 设置除小数点外有三位有效数字
   cout<<3.14159<<endl;
   cout<<setiosflags(ios::fixed);    //以固定小数位显示
   cout<<999.123456<<endl;
   cout.width(10);          // 设置显示域宽10
   cout.fill('*');          // 在显示区域空白处用*填充
   cout<<resetiosflags(ios::left);  // 清除状态左对齐
   cout<<123<<endl;
   return 0; }
