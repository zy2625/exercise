#include <iostream>
#include <ctime>
 
using namespace std;
 
int main( )
{
   // 基于当前系统的当前日期/时间
   time_t now = time(0);            //1970至现在的秒数

   cout<< now <<endl;
   
   // 把 now 转换为字符串形式
   char* dt = ctime(&now);          //该返回一个表示当地时间的字符串指针，字符串形式 day month year hours:minutes:seconds year\n\0。

 
   cout << "本地日期和时间：" << dt << endl;
 
   // 把 now 转换为 tm 结构
   tm *gmtm = gmtime(&now);           //该函数返回一个指向 time 的指针，time 为 tm 结构，用协调世界时（UTC）也被称为格林尼治标准时间（GMT）表示。
   dt = asctime(gmtm);                  //该函数返回一个指向字符串的指针，字符串包含了 time 所指向结构中存储的信息，返回形式为：day month date hours:minutes:seconds year\n\0。
   cout << "UTC 日期和时间："<< dt << endl;
}