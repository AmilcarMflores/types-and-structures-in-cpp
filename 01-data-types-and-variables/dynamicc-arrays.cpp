#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    //Create a dynamic array
    int* dynamicArray = new  int[size];

    //Populate the dynamic array
    for(int i = 0; i < size; i++){
        dynamicArray[i] = i * 2;
    }

    //Display the dynamic array
    cout << "Dynamic array: ";
    for(int i = 0; i < size; i++) {
        cout << dynamicArray[i] << " ";
    }

    //Clean up the dynamic array
    delete[] dynamicArray;

    return 0;
}