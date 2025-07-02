#include <iostream>
using namespace std;

class MyClass {
    private:
        int value;
    public:
        MyClass(int val) : value(val) {}

        int getValue() const {
            return value;
        }

        //Overloading the comma operator
        MyClass operator,(const MyClass& other) const {
            cout << "Evaluating the comma operator" << endl;
            return other; //Return the rightmost expression
        }
};

int main() {
    MyClass obj1(42);
    MyClass obj2(100);
    MyClass obj3(200);

    MyClass result = (obj1, obj2, obj3); //Using the comma operator

    cout << "Value of the result: " << result.getValue() << endl;
    return 0;
}