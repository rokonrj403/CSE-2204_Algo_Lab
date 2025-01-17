#include <iostream>
using namespace std;

int main(){

    int row1, row2, col1, col2;



    cout << "Number of Row for Matrix A: ";
    cin >> row1;
    cout << "Number of Column for Matrix A: ";
    cin >> col1;

    int matrixA [row1][col1];
    // int matrixB [row2][col2];

    cout << "Enter the Element of Matrix A(" << row1 << "x" << col1 <<")" << ":" << endl;


    for (int i = 0; i < row1; i++){

        for (int j = 0; j < col1; j++){
            cin>> matrixA[i][j];
        }
    }

    cout << "Number of Row for Matrix A: ";
    cin >> row2;
    cout << "Number of Column for Matrix A: ";
    cin >> col2;

    int matrixB [row2][col2];

    cout << "Enter the Element of Matrix A(" << row2 << "x" << col2 <<")" << ":" << endl;

    for (int i = 0; i < row2; i++)
    {

        for (int j = 0; j < col2; j++){
            cin>> matrixB[i][j];
        }
    }

    int matrixC[row1][col1];

    if (col1 == row1)
    {

        for (int i = 0; i < row1; i++){
            for (int j = 0; j< col1; j++){

                matrixC[i][j] = matrixA[i][j] * matrixB[i][j];

                }
        }
        
        cout << "MatrixA * MatrixB = " << endl;

        for (int i = 0; i < row1; i++){
        for(int j = 0; j< col1; j++){
            cout << matrixC[i][j] << " ";
        }

        cout << endl;
    }
    }
    else{
        cout << "ERROR!!! Number of Cloumn of MatrixA and Number of Rows of MatrixB are Different!" << endl;
    }

    



        return 0;
}