#include <iostream>
using namespace std;

int main(){

    int numberOfElements;
    int targetValue;

    cout << "Enter the Number of Elements of Array A: ";
    cin >> numberOfElements;

    int arrA[numberOfElements];

    cout << "Enter the Elements: " << endl;

    for (int i = 0; i < numberOfElements; i++){

        cin >> arrA[i];
    }

    cout << "Enter the Target Value: " << endl;
    cin >> targetValue;

    cout << "Indexing Positions are: " << endl;

    int n = 0;

    for (int i = 0; i <numberOfElements - 1; i++){

            for (int j = 1; j <=numberOfElements; j++){

                if(arrA[i] + arrA[j] == targetValue){

                    cout << i << "," << j << endl;
                    
                }

            }




    }

        return 0;
}