#include <math.h>
#include <iostream>
#include <string>
#include<stdlib.h>
#include<vector>
#include <algorithm>
#include<iostream>
#include<ctype.h>
#include <iomanip>
using namespace std;
using LL = long long;

const int mod = 7 + 1e9;
int f(char v);

string s;
vector<int> a;
vector<int> b;

int calc(int p) {                       //p为进制数；
    LL ans = 0;
    for (auto &i : a) {
        if (i >= p) return -1;
        ans = ans * p + i;
        ans %= mod;
    }
    return ans;
}

int  f(char v) 
    {                                    //v = i
        if (isdigit(v)) return (v - '0'); //判断是否是十进制数
        return (v - 'A' + 10);
    }

int main() {
    cin >> s;                            // s = '12'   
    //     auto f = [](char v) {           //v = i
    //     if (isdigit(v)) return v - '0'; //判断是否是十进制数
    //     return v - 'A' + 10;            //否则字母转为数字，返回数字给 f;
    // };

    
    for (auto & i : s) {                //i = s[0],i = s[1],i = s[2]...
        a.push_back(f(i));              //a[0] = f ,a[1] =  
    }

    for (int i = 10; i <= 10; ++i) {
        int val = calc(i);
        if (val < 0) continue;
        b.push_back(val);
    }
    sort(b.begin(), b.end());           //从小到大排序；
    b.erase(unique(b.begin(), b.end()), b.end());       //删除
    for (auto &i : b) cout << i << endl;
    return 0;
}