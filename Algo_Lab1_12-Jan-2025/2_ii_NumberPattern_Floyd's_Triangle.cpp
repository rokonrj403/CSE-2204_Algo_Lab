// To Print the Floyd's Triangle till N number of user Input

// 0
// 01
// 101
// 0101
// 10101



#include <iostream>
using namespace std;

int main(){

    int numberN;


    cout << "Enter the N: ";
    cin >> numberN;

    for (int i = 1; i <= numberN; i++){

        for (int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
}