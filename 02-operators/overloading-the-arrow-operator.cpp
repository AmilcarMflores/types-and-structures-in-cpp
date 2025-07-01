#include <iostream>
using namespace std;

class MyObject {
    public:
        void someFunction() {
            cout << "Hello from someFunction!" << endl;
        }
};

class MyWrapper {
    private: 
        MyObject* ptr;

    public: 
        MyWrapper(MyObject* p) : ptr(p) {}

        MyObject* operator->() {
            return ptr;
        }
};

int main() {
    MyObject obj;
    MyWrapper wrapper(&obj);

    wrapper->someFunction(); //Equivalent to: (*wrapper).someFuntion();
    return 0;
}