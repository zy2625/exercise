#include<iostream>
#include<ctime>

using namespace std;

void getSeconds(unsigned long *par);

int main(){
    // srand( (unsigned)time( NULL ) );
    unsigned long sec;
 
 
   getSeconds( &sec );
 
   // 输出实际值
   cout << "Number of seconds :" << sec << endl;
 
   return 0;
}

void getSeconds(unsigned long *par)
{
   // 获取当前的秒数
   *par = time( NULL );
   return;
}