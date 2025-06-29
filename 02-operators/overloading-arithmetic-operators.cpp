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

        //Overloading the addition operator +
        MyClass operator+(const MyClass& other) const{
            int result = value + other.value;
            return MyClass(result);
        }

        //Overloading the subtraction operato -
        MyClass operator-(const MyClass& other) const {
            int result = value - other.value;
            return MyClass(result);
        }

        //Overloading the multiplication operator *
        MyClass operator*(const MyClass& other) const {
            int result = value * other.value;
            return MyClass(result);
        }

        //Overloading the division operator /
        MyClass operator/(const MyClass& other) const {
            int result = value / other.value;
            return MyClass(result);
        }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(3);

    MyClass sum = obj1 + obj2;
    MyClass difference = obj1 - obj2;
    MyClass product = obj1 * obj2;
    MyClass quotient = obj1 / obj2;

    //Output the results
    cout << "Sum: " << sum.getValue() << endl;
    cout << "Deifference: " << difference.getValue() << endl;
    cout << "Product: " << product.getValue() << endl;
    cout << "Quotient: " << quotient.getValue() << endl;

    return 0;
}