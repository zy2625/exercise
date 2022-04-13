#include<iostream>

using namespace std;

class Box
{
    public:
    double length;
    double breadth;
    double heigth;
    void set(double len, double bre, double hei);
    double get(void);
};
void Box ::set (double len, double bre, double hei){
    length = len;
    breadth = bre;
    heigth = hei;
}

double Box ::get(){
    return length*breadth*heigth;
}

int main(){
    Box box1;
    Box box2;
    double volume = 0;

    box1.length = 3.2;
    box1.breadth = 4.5;
    box1.heigth = 5.6;

    volume = box1.length*box1.breadth*box1.heigth;

    cout << volume << endl; 

    box2.set(3.2, 4.5, 5.6);
    volume = box2.get();

    cout << volume << endl;

    return 0;
}