#include<iostream>
 
using namespace std;
 
int main()
 
{
 
    string s("hello world");
 
    for(auto c:s)                 
 
    c='t';
 
    cout<<s<<endl;//结果为hello world
 
    for(auto &c:s)
     
    cout << endl << c <<endl;//结果为ttttttttttt
    return 0;
}