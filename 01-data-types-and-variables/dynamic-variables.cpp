#include <iostream>
using namespace std;

int main() {
    //Dynamic memory allocation
    int* dynamicInt = new int; //Allocate memory for an integer 
    *dynamicInt = 10; //Assign a value to the dynamic variable
    
    double* dynamicDouble = new double; //Allocate memory for a double
    *dynamicDouble = 3.14;

    char* dynamicChar = new char; //Allocate memory for a character
    *dynamicChar = 'A';

    //Print the dynamic variables
    cout << "Dynamic Int: " << *dynamicInt << endl;
    cout << "Dynamic Double: " << *dynamicDouble << endl;
    cout << "Dynamic Char: " << *dynamicChar << endl;

    //Dynamic memory deallocation
    delete dynamicInt; //Deallocate memory for the dynamic int
    delete dynamicDouble; //Deallocate memory for the dynamic double
    delete dynamicChar; //Deallocate memory for the dynamic char

    return 0;
}