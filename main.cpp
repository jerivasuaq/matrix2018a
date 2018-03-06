#include<iostream>
#include<cmath>

#include"matrix.h"
using namespace std;

int main()
{
    cout<<"Matrix manipuluation program.\n";
    Matrix m, c;
    m.read();
    m.print();
    m.scalarMul(5);
    m.print();

    m.multiplication();
    m.print();
    return 0;
}
