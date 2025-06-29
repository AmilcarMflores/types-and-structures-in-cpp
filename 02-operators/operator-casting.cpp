#include <iostream>
using namespace std;

int main() {
    double number = 3.14159;
    int integer = static_cast<int>(number); //Explicitly cast double to int

    cout << "Number: " << number << endl;
    cout << "Integer: " << integer << endl;

    return 0;
}