#include <iostream>
using namespace std;

constexpr int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    constexpr int SIZE = 10;
    constexpr int FACTORIAL_5 = factorial(5);

    // SIZE = 20; // Error: Cannot modify a constexpr variable

    cout << "Size: " << SIZE << endl;
    cout << "Factorial of 5: " << FACTORIAL_5 << endl;

    return 0;
}