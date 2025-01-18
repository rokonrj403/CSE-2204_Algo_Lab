#include <iostream>
using namespace std;

int main() {
    int numberOfElements;

    cout << "Enter the Number of Elements of Array A: ";
    cin >> numberOfElements;

    int arrA[numberOfElements];

    cout << "Enter the Elements: " << endl;
    for (int i = 0; i < numberOfElements; i++) {
        cin >> arrA[i];
    }

    int x = 0;
    int arrB[numberOfElements]; 

    for (int i = 0; i < numberOfElements; i++) {
        for (int j = i + 1; j < numberOfElements; j++) {
            if (arrA[i] == arrA[j]) {
                
                arrB[x] = arrA[i];
                x++;
                break; 
            }
        }
    }

    cout << "Duplicate elements are: ";
    for (int i = 0; i < x; i++) { 
        cout << arrB[i] << " ";
    }
    cout << endl;

    return 0;
}
