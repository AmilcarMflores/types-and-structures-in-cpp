#include <iostream>
using namespace std;

int main() {
    const int MAX_VALUE = 100;
    const double PI = 3.14159;

    //MAX_VALUE = 200; // Error: Cannot modify a const variable
    //PI = 3.14; // Error: Cannot modify a const variable

    cout << "Max value: " << MAX_VALUE << endl;
    cout << "PI: " << PI << endl;

    return 0;
}