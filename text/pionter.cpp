#include<iostream>
using namespace std;
const int Max = 3;
const char *names[Max] = {"SaYu", "HuTao","GanYu"};  //char *names[MAX] 是指针数组, 它的本质是存储指针的数组
                                                    //既存储 char 类型的指针的数组, 数组内的每个元素都是一个指针指向一个存储 char 类型的地址:

int main(){
    int a[Max] = {10, 100, 200};
    int *ip[Max];
    // ip[Max] = &a[Max];
    for(int i = 0;i < Max; i++){
        ip[i] = &a[i];
        cout << ip <<" " <<*ip[i]<< endl;
        cout << names[i] << endl;     
    }
    return 0; 
}