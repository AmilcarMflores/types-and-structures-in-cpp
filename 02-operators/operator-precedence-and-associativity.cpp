#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5, c = 2;

    int result1 = a + b * c; //Multiplication (*) has higher precedence than addition (+)
    int result2 = (a + b) * c; //Parentheses () can be used to override the default precedence
    cout << "Expression 1: " << a << " + " << b << " * " << c << " = " << result1 << endl; //20
    cout << "Expression 2: (" << a << " + " << b << ") * " << c << " = " << result2 << endl; //30

    return 0;
}