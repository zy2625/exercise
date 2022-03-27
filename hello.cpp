#include <iostream>
using namespace std;
 

  
int main ()
{
  // 比较3个数的大小
  // int a, b, c, d, max ;
  // cout << "请输入两个数：";
  // cin >> a >> b >> c ;
  //    max = (d=a>=b?a:b)>=c?d:c;  
  // cout << max <<endl; 
  int a, b, c, d, m, n, max;
  a = 10, b = 20, c = 30, d = 40;
  m = a > b? a:b;
  n = c> d?c:d;
  max = m>n?m:n;
  cout << max << endl; 
 
  return 0;
}