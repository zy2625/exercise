#include <iostream>
#include <math.h>
using namespace std;
int main() {
    cout << "请输入半菱形高度n" << endl;
    int n = 0;
    cin >> n;
    for (int i = 1; i <  2 * n ; i++) {
        for (int j = 1; j < 2 * n; j++) {
            if (abs(i - n) + abs(j - n) == n - 1 ) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}