#include <bits/stdc++.h>
using namespace std;
using LL = long long;
const int mod = 7 + 1e9;

string s;
vector<int> a;
vector<int> b;
int calc(int p) {
    LL ans = 0;
    for (auto &i : a) {
        if (i >= p) return -1;
            ans = ans * p + i;
            ans %= mod;
    }
    return ans;
}

int main() {
    cin >> s;
    auto f = [](char v) {
    if (isdigit(v)) return v - '0';
    return v - 'A' + 10;
    };
    for (auto & i : s) {
        a.push_back(f(i));
    }
    for (int i = 2; i <= 16; ++i) {
        int val = calc(i);
        if (val < 0) continue;
            b.push_back(val);
    }
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    for (auto &i : b) cout << i << endl;
    return 0;
}