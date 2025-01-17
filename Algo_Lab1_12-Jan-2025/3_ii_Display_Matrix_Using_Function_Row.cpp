// Rewrite the previous problem to make the row parameter of the matrix as a default argument.

#include <iostream>
using namespace std;

void matrixInput(int y, int x=5)
{
// int row, col;

//     x = row;
//     y = col;
    


    int matrixA[x][y];

    cout << "Matix will be: " << x << "x" << y << endl;
}
int main(){
    int n;

    cout << "Default Row is: 5" << endl;

    cout << "Enter the Number of Column: ";
    cin >> n;

    matrixInput(n);

    return 0;

}