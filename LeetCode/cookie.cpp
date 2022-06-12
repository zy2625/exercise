#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s);

int main(){
vector<int>g(4,0);
vector<int>s(4,0);

g= {1,2};
s = {1,2,3};

cout << findContentChildren(g,s);


}
int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),  g.end());
        sort(s.begin(), s.end());
        int child = 0, cookie = 0;
        while (child < g.size() && cookie < s.size()) {
        if (g[child] <= s[cookie]) child++;
        
        cookie++;
        }
        return child;
}