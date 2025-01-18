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

    int index = 0;

    for (int i = 0; i < numberOfElements; i++) {
        if (arrA[i] != 0) {
            arrA[index++] = arrA[i];
        }
    }

    while (index < numberOfElements) {
        arrA[index++] = 0;
    }

    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < numberOfElements; i++) {
        cout << arrA[i] << " ";
    }
    cout << endl;

    return 0;
}
