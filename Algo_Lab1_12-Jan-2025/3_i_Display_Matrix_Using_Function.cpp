#include <iostream>
using namespace std;

void matrixInput()
{
   int row, col;

    cout << "Enter the Number of Row: ";
    cin >> row;

    cout << "Enter the Number of Column: ";
    cin >> col;

    int matrixA[row][col];

    cout << "Matix will be: " << row << "x" << col << endl;
}
int main(){

    matrixInput();

    return 0;

}

