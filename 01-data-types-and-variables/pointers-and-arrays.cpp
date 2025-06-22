#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr; //Assigning the pointer to the beginning of the array

    //Accesing array elements using pointer arithmetic
    cout << "Array elements: ";
    for(int i = 0; i < 5; i ++) {
        cout << *(ptr + i) << " "; //Using pointer arithmetic to access elements 1 2 3 4 5
    }
    cout << endl;

    //Manipulating array elements using pointers
    *(ptr + 2) = 10; //Changing the value at index 2

    //Printing modified array elements
    cout << "Modified array elements: ";
    for(int i = 0; i < 5; i++){
        cout << *(ptr + i) << " "; //1 2 10 4 5 
    } 
    cout << endl;

 
   return 0;
}