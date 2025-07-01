#include <iostream>
using namespace std;

class MyClass {
    private: 
        int value;
    public:
        MyClass(int val) : value(val) {}

        //Overloading the less than operator (<)
        bool operator<(const MyClass& other) const{
            return value < other.value;
        }

        //Overloading the greater than operator (>)
        bool operator>(const MyClass& other) const {
            return value > other.value;
        }

        //Overloading the less than or equal to operator (<=)
        bool operator<=(const MyClass& other) const {
            return value <= other.value;
        }

        //Overloading the greater than or equal to operator (>=)
        bool operator>=(const MyClass& other) const {
            return value >= other.value;
        }

        //Overloading the equal to operator(==)
        bool operator==(const MyClass& other) const {
            return value == other.value;
        }

        //Overloading the not equal to operator(!=)
        bool operator!=(const MyClass& other) const{
            return value != other.value;
        }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(10);

    if(obj1 < obj2) {
        cout << "obj1 is less than obj2\n";
    }

    if(obj1 > obj2) {
        cout << "obj1 is greater than obj2\n";
    }

    if(obj1 <= obj2) {
        cout << "obj1 is less than or equal to obj2\n";
    }
    
    if(obj1 >= obj2) {
        cout << "obj1 is greater than or equal to obj2\n";
    }
    
    if(obj1 == obj2) {
        cout << "obj1 is equal to obj2\n";
    }

    if(obj1 != obj2) {
        cout << "obj1 is not equal to obj2\n";
    }
    
    return 0;
}