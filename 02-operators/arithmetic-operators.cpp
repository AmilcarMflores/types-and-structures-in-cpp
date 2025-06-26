#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 5;

    //Addition
    int sum = a + b;
    cout << "Addition: " << a << " + " << b << " = " << sum << endl;

    //Subtraction
    int difference = a - b;
    cout << "Subtraction: " << a << " - " << b << " = " << difference << endl;

    //Multiplication
    int product = a * b;
    cout << "Multiplication: " << a << " * " << b << " = " << product << endl;

    //Division
    int quotient = a / b;
    cout << "Division: " << a << " / " << b << " = " << quotient << endl;

    //Modulus
    int remainder = a % b;
    cout << "Modulus: " << a << " % " << b << " = " << remainder << endl;

    //Precedence
    int result = a + b * 2 - 3 / 2 % 2;
    cout << "Precedende: " << a << " + " << b << " * 2 - 3 / 2 % 2 = " << result << endl;

    return 0;
}