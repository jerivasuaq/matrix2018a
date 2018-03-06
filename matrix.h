#include <iostream>
#include<time.h>
#include<new>

//#ifndef _Matrix_
//#define _Matrix_
#ifndef _MATRIX_H
#define _MATRIX_H

class Matrix
{
public:
    Matrix();
    void read();
    void print();
    void scalarMul(float);
    float M[100][100];
    float n[100][100];
    float C[100][100];
    void multiplication();
    int NCols;
    int NRows;
};
#endif
