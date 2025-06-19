#include <iostream>
using namespace std;

// Global variable with global scope
int globalVariable = 10;

void func() {
    // Local variable with local scope
    int localVariable = 20;
    
    // Block scope variables
    {
    int blockVariable = 30;
    cout << "Inside block: " << blockVariable << endl;
    }

    // Attempting to access the blockVariable here will result in a compilation error 
    //cout << "Outside block: " << blockVariable << endl;

    cout << "Inside function: " << localVariable << endl;
}

int main() {
    cout << "Global variable: " << globalVariable << endl;

    // Attempting to access localVariable or blockVariable here will result in a compilation error
    //cout << "Local variable: " << localVariable << endl;
    //cout << "Block variable: " << blockVariable << endl;

    func();

    return 0;
}

