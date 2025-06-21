#include <iostream>
using namespace std;

int main() {
    int value = 42;
    int* pointer = &value; //Declare a pointer and assign the memory address of 'value' to it

    cout << "Value: " << value << endl;
    cout << "Memory Address: " << pointer << endl;
    cout << "Dereferenced Value: " << *pointer << endl;

    *pointer = 99; //Modify the value indirectly using the pointer
    cout << "New Value: " << value << endl;

    return 0;
}