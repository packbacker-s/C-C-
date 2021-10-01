#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cstdio>
const double eps = 1e-8;
const double inf = 1e20;
const double pi = acos(-1.0);
const int maxn = 1010;
using namespace std;
int sgn(double x) {  // 判断一个值  是否无限接近0
  if(fabs(x) < eps)return 0; //约等于0返回0
  if(x < 0) return -1;
  else return 1;
}
struct Point {
  double x, y;
  Point(){}
  Point (double _x, double _y) {
    x = _x; y = _y;
  }
  void input() {
    scanf("%lf %lf", &x, &y);
  }
  void output() {
    printf("%.2f %.2f\n", x, y);
  }
  bool operator == (Point b)const {
    return sgn(x - b.x) == 0 && sgn(y - b.y) == 0;
  }
  bool operator < (Point b) const {
    return sgn(x - b.x) == 0 ? sgn(y - b.y) < 0 : x < b.x;
  }
  /* 叉乘（主要是向量之间） */
  double operator ^ (const Point &b) const {
    return x * b.y - y* b.x;   // 返回模长  带正负
  }
  //点乘
  double operator * (const Point &b)const {
    return x * b.x + y * b.y;
  }
  //返回长度
  double len(){
    return hypot(x, y);  // 返回值相当于sqrtx*x + y*y
  }
  //返回长度的平方
  double len2() {
    return x * x + y * y;
  }
  //返回两点的距离
  double distance(Point p) {
    return hypot(x - p.x, y - p.y);
  }
  //向量的加减乘除
  Point operator + (const Point &b)const{
    return Point (x - b.x, y - b.y);
  }
  Point operator - (const Point &b)const{
    return Point (x - b.x, y - b.y);
  }
  Point operator * (const double &b)const{
    return Point(x * b, y * b);
  }
  Point operator / (const double &b)const{
    return Point(x / b, y / b);
  }
  // 计算这个点到a点 和b点所在的夹角
  // 就是从这个点看a b两点之间的夹角
  double rad (Point a, Point b) {
    Point p = *this;
    //cout << p.x << p.y <<endl;
    return fabs(atan2(fabs((a - p) ^ (b - p)), (a - p) * (b - p)));
  }
};
