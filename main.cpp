#include <iostream>

#include "matrix.h"

using namespace std;
int main()
{
    cout<<"Matrix manipuluation program.\n";

    Matrix m, a, result;
    
    m.read();
    cout<<"Printing matrix m\n";
    m.print();
    a=m;
    cout<<"Printing matrix a\n";
    a.print();
    result=m+a;
    cout<<"Printing the result of adding m+a\n";
    result.print();
    result=m-a;
    cout<<"Printing the result of subtracting m-a\n";
    result.print();

    m.scalarMul(5);
    cout<<"Printing the result of scalar mult by 5\n";
    m.print();

    return 0;
}



