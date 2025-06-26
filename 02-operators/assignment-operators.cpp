#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;

    //Assignment operator (=)
    int c = a;
    cout << "c = " << c << endl;

    //Addition assignment operator (+=)
    c += b; // Equivalent to: c = c + b;
    cout << "c += " << b << " => c = " << c << endl;

    //Subtraction assignment operator (-=)
    c -= b; // Equivalent to: c = c - b;
    cout << "c -= " << b << " => c = " << c << endl;

    //Multiplication assignment operator (*=)
    c *= b; //Equivalent to: c = c * b;
    cout << "c *= " << b << " => c = " << c << endl;

    //Division assignment operator (/=)
    c /= b; //Equivalent to: c = c / b;
    cout << "c /= " << b << " => c = " << c << endl;

    //Modulus assignment operator (%=)
    c %= b; //Equivalent to: c = c % b;
    cout << "c %= " << b << " => c = " << c << endl;

    //Bitwise AND assignment operator (&=)
    c &= b; //Equivalent to: c = c & b;
    cout << "c &= " << b << " => c = " << c << endl;

    //Bitwise OR assignment operator (|=)
    c |= b; //Equivalent to: c = c | b;
    cout << "c |= " << b << " => c = " << c << endl;

    //Bitwise XOR assignment operator (^=)
    c ^= b; //Equivalent to: c c ^ b;
    cout << "C ^= " << b << " => c = " << c << endl;

    //Left shift assignment operator (<<=)
    c <<= b; //Equivalent to: c = c << b;
    cout << "c <<= " << b << " => c = " << c << endl;

    //Right shift assignment operator (>>=)
    c >>= b; //Equivalent to: c = c >> b;
    cout << "c >>= " << b << " => c = " << c << endl;

    return 0;
}