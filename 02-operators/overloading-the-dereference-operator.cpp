#include <iostream>
using namespace std;

class MyClass {
    private:
        int value;
    public:
        MyClass(int val) : value(val) {}

        int getValue() const { return value; }
};

class MySmartPointer {
    private:
        MyClass* ptr;
    public:
        MySmartPointer(MyClass* p) : ptr(p) {}
        ~MySmartPointer() { delete ptr; }
        MyClass& operator*() const { return *ptr; }
};

int main() {
    MySmartPointer sp(new MyClass(42));
    cout << "Dereferenced value: " << (*sp).getValue() << endl;

    return 0;
}