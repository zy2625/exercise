#include<iostream>
#include<ctime>
#include<cstdlib>
//#include<rand>

using namespace std;
int main(){
    int j;
    srand((unsigned)time(NULL));
    // j = rand();
    for(int i = 0; i < 10; i++){
        j = rand();
        cout << j << endl;
    }
    // cout << j << endl;
    return 0;
}
