// To Display n Number of nutural numbers and their sum
#include <iostream>
using namespace std;

int main(){

    int numberN;


    cout << "Enter the N: ";
    cin >> numberN;

    int sum = 0;

    cout << "Nutural Numbers Are: ";
    for (int i = 1; i <= numberN; i++)
    {
        cout << i << " ";

        sum = sum + i;
    }

    cout << "\n";

    cout << "Sum Of N Nutural Numbers is: " << sum << endl;

    return 0;
}
