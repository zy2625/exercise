#include<iostream>

using namespace std;
double vals[] = {10.1, 20.2, 30.4, 40.3, 56.7};
double & setVals(int i){
    double &ref = vals[i];
    return ref;
}
int main(){
    for(int i = 0; i<5; i++){
        cout << vals[i]<< "  ";        
    }
    cout << endl;
    setVals(1) = 60.4,setVals(3) = 70.9;
    for(int i = 0; i<5; i++){
        cout << vals[i]<< "  ";        
    }
    cout << endl;
    return 0;
}