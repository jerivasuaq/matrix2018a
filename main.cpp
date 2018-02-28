#include <iostream>

#include "matrix.h"

using namespace std;
int main()
{
    cout<<"Matrix manipuluation program.\n";

    Matrix m;
    
    m.read();
    m.print();
    m.trans();
    m.scalarMul(4);    
    m.print();

    return 0;
}



