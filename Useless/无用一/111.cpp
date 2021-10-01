输入来给你个正整数m,n，求其最大公约数和最小公倍数，（辗转相除法）
public class Progl {
  public static void main(String[] args) {
  int m, n;
  try {
    m = Integer.parseInt(args[0]);
    n = Integer.parseInt(args[1]);
  }catch(ArrayIndexOutOfBoundsException e) {
    System.out.println("输入有误")；
    return;
   }
  max_min(m, n);
 } //求最大公约数和最小公倍数
}
private static void max_min(int m, int n) {
  int temp = 1;
  int yushu = 1;
  int bshu = m*n;
  if(n < m) {
    temp = n;
    n = m;
    m = temp;
  }
  while(m != 0) {
    temp = n % m;
    n = m;
    m = temp;
  }
  yushu = n;
  bshu /= n;
  System.out.println(m+"和"+n+"的最大公约数为"+yushu);
  System.out.println(m+"和"+n+"的最小公约数为"+bshu);
}

一个数如果恰好等于它的因子之和，这个数就称为“完数”，编程找出1000内的完数
public class Prog2 {
  public static void main(String[] args) {
    int n = 10000;
    compNumber(n);
  }   //求完数
  private static void compNumber(int n) {
    int count = 0;
    Ststem.out.println("n+以内的完数：")；
    for(int i = 1; i < n+1; i++) {
      int sum = 0;
      for(j = 1; j < i/2 + 1; j++) {
        if(i%j == 0) {
          sum += j;
          if(sum == i) {
            System.out.print(i+"");
            if((count++) % 5 == 0) {
              System.out.println();
            }
          }
        }
      }
    }
  }
}


有1 ， 2， 3， 4个数字。能组成多少个互不相同且无重复数字的三位数，都是多少
public class Prog3 {
  public static void main(String[] args) {
    int count = 0;
    int n = 0;
    for(int i = 1; i < 5; i++) {
      for(int j = 1; j < 5; j++) {
        if(i == j)
          contiune;
          for(int k = 1; k < 5; k++) {
            if(k != i && k != j) {
              n = i * 100 + j * 10 + k;
              System.out.print(n+"");
              if((++count) % 5 == 0)
                System.out.println()；
            }
          }
      }
    }
    System.out.println();
    System.out.println("符合条件的数共："+count+"个")；
  }
}



输入年月日，判断是今年的第几天
import java.util.Scanner;
public class Prog4{
  public class static void main(String[] args) {
    Scanner scan = new Scanner(http:/ /System.in).useDelimiter("\\D"); //匹配非数字
    System.out.print("请输入当前日期(年-月-日)：");
    int year = scan.nextInt();
    int month = scan.nextInt();
    int date = scan.nextInt();
    scan.slose();
    System.out.println("今天是"+year+"年的第"+analysis(year.month.date)+"天")；
  }
  private static int analysis(int year, int month, int date) {
    int n = 0;
    int []month_date == new int []{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    if((yera % 400) == 0 || ((year % 4) == 0) && ((year % 100 != 0))
      month_date[2] = 29;
    for(int i = 0; i < month; i++) {
      n += month_date[i];
    }
    return n + date;
}
