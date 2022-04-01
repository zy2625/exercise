#include <iostream>
#include<limits>
using namespace std;
float area(float a,float b);
int main()
{
  
    float length,width;
    length=10.0;
    width=5.0;
    float areas=area(length,width);
    cout << areas <<endl;
    return 0;
}
float area(float a,float b){
    return a*b;
}