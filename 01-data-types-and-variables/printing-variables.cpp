#include <iostream>
#include <iomanip> // Required for some formatting options
using namespace std;

int main() {
    int intValue = 42;
    double doubleValue = 3.14159;
    string stringValue = "Hello, World!";

    // Basic printing
    cout << "Integer value: " << intValue << endl;
    cout << "Double value: " << doubleValue << endl;
    cout << "String value: " << stringValue << endl;

    // Formatting options
    cout << endl;

    // Fixed-point notation with 2 decimal places
    cout << "Double value (fixed): " << fixed << setprecision(2) << doubleValue << endl;

    // Scientific notation with 4 decimal places
    cout << "Double value (scientific): " << scientific << setprecision(4) << doubleValue << endl;

    // Width and fill
    cout << "Integer value (width): " << setw(10) << setfill('*') << intValue << endl;

    // Reset formatting options
    cout.unsetf(ios::fixed);
    cout.unsetf(ios::scientific);
    cout << setw(0) << setfill(' ') << endl;

    return 0;
}