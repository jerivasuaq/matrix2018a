#include<iostream>
#include "matrix.h"

using namespace std;

//#ifdef _Matrix_


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
                        cin >> M[i][j];
                }
        }
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


void Matrix::scalarMul(float x)
{

    for(int i=0; i<NRows; i++)
        for(int j=0; j<NCols; j++)
            M[i][j]*= x;
}

void Matrix::multiplication ()
{
   Matrix n,c;
   n.read();
   if (NCols==n.NRows){
    for(int i=0; i<NRows; i++){
        for(int j=0; j<n.NCols; j++){
            c.M[i][j] = 0;
            for(int H=0; H<NRows; H++)
               c.M[i][j] = c.M[i][j] +(M[i][H] * n.M[H][j]);
        }
     }
     for(int i=0; i<NRows; i++){
        for(int j=0; j<n.NCols; j++)
               M[i][j] = c.M[i][j];
     }
     NCols = n.NCols;
  }
 else
   cout<<"No se puede multiplicar "<<endl;
}
