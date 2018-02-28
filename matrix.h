#ifndef _MATRIX_H
#define _MATRIX_H

class Matrix
{
public:
    Matrix();
    void read();
    void print();
    float M[100][100];
    int NCols;
    int NRows;
};

#endif
