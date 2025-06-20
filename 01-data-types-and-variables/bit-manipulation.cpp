#include <iostream>
using namespace std;

int main() {
    int a = 5; //0101 in binary
    int b = 3; // 0011 in binary

    // Bitwise AND
    int resultAnd = a & b;
    cout << "Bitwise AND: " << resultAnd << endl; // Output: 1

    // Bitwise OR
    int resultOr = a | b;
    cout << "Bitwise OR: " << resultOr << endl; // Output: 7

    // Bitwise XOR
    int resultXor = a ^ b;
    cout << "Bitwise XOR: " << resultXor << endl; // Output: 6

    // Bitwise NOT
    int resultNotA = ~a;
    cout << "Bitwise NOT (A): " << resultNotA << endl; // Outuput: -6

    int resultNotB = ~b;
    cout << "Bitwise NOT (B): " << resultNotB << endl; // Output: -4

    // Left shift
    int leftShifted = a << 2;
    cout << "Left Shift: " << leftShifted << endl; // Output: 20

    // Right shift
    int rightShifted = a >> 1;
    cout << "Right Shift: " << rightShifted << endl; // Output: 2

    return 0;
}