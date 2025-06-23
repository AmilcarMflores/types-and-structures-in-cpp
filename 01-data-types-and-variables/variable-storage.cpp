#include <iostream>
using namespace std;

int globalVariable; //Stored in the data segment

void foo() {
    int stackVariable; //Stored in the stack
    int* heapVariable = new int; //Stored in the heap

    cout << "Address of stackVariable: " << &stackVariable << endl;
    cout << "Address of heapVariable: " << heapVariable << endl;
}

int main() {
    int mainVariable; //Stored in the stack

    cout << "Address of globalVariable: " << &globalVariable << endl;
    cout << "Address of mainVariable: " << &mainVariable << endl;

    foo();
    return 0;
}