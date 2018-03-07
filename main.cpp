#include<iostream>
#include<cmath>

#include"matrix.h"
using namespace std;

int main()
{
    cout<<"Matrix manipuluation program.\n";
    
    Matrix m, c, a, result;
    m.read();
    m.print();
    
    a=m;
    a.print();
    result=m+a;
    result.print();
    result=m-a;
    result.print();

    m.scalarMul(5);
    m.print();

    m.multiplication();
    m.print();
    return 0;
}
