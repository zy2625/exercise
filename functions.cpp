#include<iostream>
using namespace std;

 int max(int,int );
auto add = [](int a, int b) -> int {return a + b;};
int main(){
    int a = 100;
    int b = 200;
    int ret;
    ret = max(a, b);
    cout << ret << endl << add(a,b) <<endl;
    return 0;
}

int max(int a, int b){
    int result;
    if(a>b)
    result = a;
    else
    result = b;
    return result;
}