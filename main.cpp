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
    cout<<"The result of addition is:\n";
    result=m+a;
    result.print();
    cout<<"The result of substraction is:\n";
    result=m-a;
    result.print();
    cout<<"The result of scalarMult(5) is: \n";
    m.scalarMul(5);
    m.print();
    cout<<"The result of multiplication is: \n";
    result=m*a;
    result.print();
    return 0;
}
