#include <iostream>
using namespace std;

void displayBinary(unsigned int num){
    for(int i = 31; i >= 0; i--)
        cout << ((num >> i) & 1);
    cout << endl;
}


int main() {
    unsigned int a = 5;
    unsigned int b = 3;

    //Bitwise AND
    unsigned int result = a & b;
    cout << "Bitwise AND: ";
    displayBinary(result);

    //Bitwise OR
    result = a | b;
    cout << "Bitwise OR: ";
    displayBinary(result);

    //Bitwise XOR
    result = a ^ b;
    cout << "Bitwise XOR: ";
    displayBinary(result);

    //Bitwise NOT
    result = ~a;
    cout << "Bitwise NOT: ";
    displayBinary(result);

    //Bitwise left shift
    result = a << 2;
    cout << "Bitwise left shift: ";
    displayBinary(result);

    //Bitwise right shift
    result = a >> 1;
    cout << "Bitwise right shift: ";
    displayBinary(result);

    return 0;
}