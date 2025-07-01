#include <iostream>
using namespace std;

class MyClass {
    private:
        int array[5]; //Example array in the class
    public:
        //Overloading the array subscript operator
        int& operator[](int index) {
            if(index >= 0 && index < 5) {
                return array[index];
            } else {
                //Handle out-of-bounds access here (e.g., throw an exception)
                throw out_of_range("Array index out of bounds");
            }
        }
};

int main() {
    MyClass obj;

    //Assign values to the array using the overloaded subscript operator
    for(int i = 0; i < 5; ++i) {
        obj[i] = i + 1;
    }

    //Access and print the values using the overloaded subscript operator
    for(int i = 0; i < 5; ++i) {
        cout << "obj[" << i << "] = " << obj[i] << endl;
    }
    return 0;
}