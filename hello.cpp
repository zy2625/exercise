#include <iostream>
using namespace std;
 

  
int main ()
{
  int a, b, c, d, max ;
  cout << "请输入两个数：";
  cin >> a >> b >> c ;
     max = (d=a>=b?a:b)>=c?d:c;  
  cout << max <<endl; 
 
  return 0;
}