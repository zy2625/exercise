#include<iostream>
using namespace std;
const int Max = 3;

int main(){
    int a[Max] = {10, 100, 200};
    int *ip[Max];
    // ip[Max] = &a[Max];
    for(int i = 0;i < Max; i++){
        ip[i] = &a[i];
        cout << ip <<" " <<*ip[i]<< endl;        
    }
    return 0; 
}