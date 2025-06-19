#include <iostream>
using namespace std;

int main(){
    // Implicit type conversion
    int num1 = 10;
    double num2 = num1; // Implicitly converts int to double
    cout << "Implicit type conversion: " << num2 << endl; // 10

    // Explicit type conversion
    double num3 = 15.75;
    int num4 = static_cast<int>(num3); // Explicitly converts double to int
    cout << "Explicit type conversion: " << num4 << endl; // 15

    // Potential pitfalls of automatic type conversion
    int num5 = 10;
    double num6 = 2.5;
    double result1 = num5 / num6; // Automatic type conversion during division
    cout << "Automatic type conversion (Division): " << result1 << endl; // 4

    int num7 = 5;
    int num8 = 2;
    double result2 = num7 / num8; // Automatic type conversion during division
    cout << "Automatic type conversion (Division): " << result2 << endl; // 2

    return 0;
}