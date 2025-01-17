#include<iostream>
#include "matrix.h"

using namespace std;
Matrix::Matrix()
{}  

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

Matrix Matrix::operator*(const Matrix& n) const
{
   Matrix c;
   if (NCols==n.NRows){
    for(int i=0; i<NRows; i++){
        for(int j=0; j<n.NCols; j++){
            c.M[i][j] = 0;
            for(int H=0; H<NRows; H++)
               c.M[i][j] = c.M[i][j] +(M[i][H] * n.M[H][j]);
        }
     }
   }
   else
     cout<<"No se puede multiplicar "<<endl;
   return c;
}

Matrix& Matrix::operator=(const Matrix& init)
{
    this->NRows=0;
    this->NCols=0;

    this->NRows=init.NRows;
    this->NCols=init.NCols;

    for(int i=0; i<NRows; i++)
    {
        for(int j=0; j<NCols; j++)
        {
            this->M[i][j]=init.M[i][j];
        }
    }

    return *this;
}

Matrix Matrix::operator+(const Matrix& matrix) const
{
    Matrix tmp;
    tmp.NCols = this->NCols;
    tmp.NRows = this->NRows;
    for(int i=0; i<NRows; i++){
        for(int j=0; j<NCols; j++){
            tmp.M[i][j]=0;
            tmp.M[i][j]=this->M[i][j]+matrix.M[i][j];
        }
    }
    return tmp;
}

Matrix Matrix::operator-(const Matrix& matrix) const
{
    Matrix tmp;
    tmp.NCols = this->NCols;
    tmp.NRows = this->NRows;
    for(int i=0; i<NRows; i++){
        for(int j=0; j<NCols; j++){
            tmp.M[i][j]=0;
            tmp.M[i][j]=this->M[i][j]-matrix.M[i][j];
        }
    }
    return tmp;
}
