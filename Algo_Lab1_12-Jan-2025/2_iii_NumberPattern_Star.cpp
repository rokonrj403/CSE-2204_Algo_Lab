// To Print the following pattern till N number of user input

// 1
// 22
// 333
// 4444
// NNNNN



#include <iostream>
using namespace std;

int main(){

    int numberN;


    cout << "Enter the N: ";
    cin >> numberN;

    for (int i = 1; i <= numberN; i++){

        cout << "*";

    }

        for (int i = 1; i <= numberN; i++)
        {

            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
    }
}