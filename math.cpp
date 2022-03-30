#include <math.h>
#include <iostream>
#define N 9999
using namespace std;
int n, H;
int a[N];
int main()
{
    int i = 0;
    while (cin >> a[i]) {
        i++;
    }
    H = a[i - 1];
    n = i - 1;
    int v = 1;
    while (1) {
        int t = 0;
        for (int i = 0; i < n; i++) {
            t += ceil(a[i] * 1.0 / v);
        }
        if (t <= H)break;
        v++;
    }
    cout << v << endl;
    return 0;
}