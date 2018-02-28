#include <iostream>
#include "matrix.h"

using namespace std;

Matrix::Matrix()
{
        cout<<"Initialzing matrix\n";
}

void Matrix::read(){
        cout << "Ingrese de NRows" << endl;
        cin >> NRows;
        cout << "Ingrese de NCols" << endl;
        cin >> NCols;
        for (int i = 0; i < NRows; i++)
        {
                for (int j = 0; j < NCols; j++)
                {
                cout<<"M["<<i<<"],["<<j<<"]: ";cin >> M[i][j];
                }
        }
	cout<<endl;
}

void Matrix::print()
{
    cout<<"NRows: "<<NRows<<endl;
    cout<<"NCols: "<<NCols<<endl;
    for(int i=0; i<NRows; i++)
    {
        for(int j=0; j<NCols; j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Matrix::trans()
{
    cout<<"La transpuesta es:"<<endl;
    for (int i=0; i<NRows; i++)
    {
        for(int j=0; j<NCols; j++)                                                       
        {                                                                              
            N[i][j] = M[j][i];                                                           
            cout<<N[i][j]<<" ";
        }
        cout<<endl; 
    }
}

void Matrix::scalarMul(float x)
{

    for(int i=0; i<NRows; i++)
        for(int j=0; j<NCols; j++)
            M[i][j]*= x;
}
