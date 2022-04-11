#include <iostream>
 
extern int count;//引用了外部变量count
 
void write_extern(void)//外部函数定义
{
   std::cout << "Count is " << count << std::endl;
}