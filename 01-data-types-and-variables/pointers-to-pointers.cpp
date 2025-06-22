#include <iostream>
using namespace std;

int main() {
    int number = 10;
    int* pointer1 = &number;
    int** pointer2 = &pointer1;

    cout << "Value of number: " << number << endl;
    cout << "Value of pointer1: " << *pointer1 << endl;
    cout << "Value of pointer2: " << **pointer2 << endl;

    return 0;
}