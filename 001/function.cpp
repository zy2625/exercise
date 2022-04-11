#include<iostream>
#include<ctime>
#include<stdlib.h>

using namespace std;
int * function();

int main(){
    int *p;
    p = function();
    for(int i = 0; i < 10; i++ ){
        cout << i << "  "<< p[i]<<endl;
    }  

    return 0;

}

int * function(){
    static int s[10];
    srand((unsigned) time (NULL));
    for(int i = 0; i <= 10; i++){
        s[i] = rand();
        cout << s[i] << " " ;
    }
    return s;
}