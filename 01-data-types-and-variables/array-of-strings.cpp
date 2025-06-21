#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 3; // Size of the array
    string strings[SIZE]; // Array of strings

    // Input strings into the array
    for(int i = 0; i < SIZE; ++i) {
        cout << "Enter string " << i + 1 << ": ";
        getline(cin, strings[i]);
    }

    // Print the strings
    cout << "Array of strings:\n";
    for(int i = 0; i < SIZE; ++i) {
        cout << "String " << i + 1 << ": " << strings[i] << "\n";
    }
    return 0;
}