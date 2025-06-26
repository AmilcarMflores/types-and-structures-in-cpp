#include <iostream>
using namespace std;

void displayBinary(unsigned int num) {
    if(num > 1) {
        displayBinary(num / 2);
    }
    cout << num % 2;
}

int main() {
    unsigned int a = 10; //Binary representation: 1010
    unsigned int b = 5; //Binary representation: 0101

    //Bitwise AND
    unsigned int resultAnd = a & b;
    cout << "Bitwise AND: ";
    displayBinary(resultAnd);
    cout << endl;

    //Bitwise OR
    unsigned int resultOr = a | b;
    cout << "Bitwise OR: ";
    displayBinary(resultOr);
    cout << endl;

    //Bitwise XOR
    unsigned int resultXor = a ^ b;
    cout << "Bitwise XOR: ";
    displayBinary(resultXor);
    cout << endl;

    //Bitwise NOT
    unsigned int resultNotA = ~a;
    cout << "Bitwise NOT of a: ";
    displayBinary(resultNotA);
    cout << endl;

    unsigned int resultNotB = ~b;
    cout << "Bitwise NOT of b: ";
    displayBinary(resultNotB);
    cout << endl;

    //Left shift
    unsigned int resultLeftShift = a << 2;
    cout << "Left shift of a by 2: ";
    displayBinary(resultLeftShift);
    cout << endl;

    //Right shift
    unsigned int resultRightShift = a >> 2;
    cout << "Right shift of a by 2: ";
    displayBinary(resultRightShift);
    cout << endl;

    return 0;
}