#include <math.h>
#include <iostream>
#include <string>
#include<stdlib.h>
#include<vector>
#include <algorithm>
using namespace std;
vector<int>b;
vector<int>dp;
int a[50];
int l, s, t, m;
int main()
{
    cin >> l >> s >> t >> m;
    for (int i = 0; i < m; i++) { cin >> a[i]; }
    for (int j = 0; j <= l; j++) { b[a[j]] = 1;  }
    int c = t - s ;
    for (int q = 0; q <= (t - s); q++) { dp[s + q] = b[s + q]; }
    for (int p = t; p <= l; p++) { for (int h = s; h <= t; h++)dp[p] = min(dp[p], dp[p - h]) + b[p]; }
    int k = dp[l];
    cout << k << endl;
    return 0;
}