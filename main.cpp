#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    for (int i = 1; i < 10; i++)
    {
        /* code */
        for (int j = 1; j < i + 1; j++)
        {
            /* code */
            cout << j << 'x' << i << '=' <<setw(2) << i*j <<"  ";
        }
        cout << endl;
    }
    
    
    return 0;
}