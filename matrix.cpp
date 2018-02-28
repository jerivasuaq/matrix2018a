#include <iostream>
#include "matrix.h"

using namespace std;

Matrix::Matrix()
{
        cout<<"Initialzing matrix\n";
}

void Matrix::read(){
        int NRows, NCols;
        cout << "Ingrese de NRows" << endl;
        cin >> NRows;
        cout << "Ingrese de NCols" << endl;
        cin >> NCols;
        for (int i = 0; i < NRows; i++)
        {
                for (int j = 0; j < NCols; j++)
                {
                        cin >> M[i][j];
                }
        }
}

