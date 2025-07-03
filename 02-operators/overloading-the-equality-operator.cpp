#include <iostream>
using namespace std;

class MyClass {
    private:
        int value;
    
    public:
        MyClass(int val) : value(val) {}

        bool operator==(const MyClass& other) const {
            return value == other.value;
        }
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);
    MyClass obj3(10);

    if(obj1 == obj2) {
        cout << "obj1 and obj2 are equal" << endl;    
    } else {
        cout << "obj1 and obj2 are not equal" << endl;
    }

    if(obj1 == obj3) {
        cout << "obj1 and obj3 are equal" << endl;
    } else {
        cout << "obj1 and obj3 are not equal" << endl;
    }
    return 0;
}