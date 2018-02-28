#include <iostream>

#include "matrix.h"

using namespace std;
int main()
{
    cout<<"Matrix manipuluation program.\n";

    Matrix m;
    
    m.read();
    m.print();

    m.scalarMul(5);
    m.print();

    return 0;
}



