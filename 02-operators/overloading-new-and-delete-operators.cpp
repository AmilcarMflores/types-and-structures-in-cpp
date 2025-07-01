#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass() {
            cout << "Constructor called" << endl;
        }

        ~MyClass() {
            cout << "Destructor called" << endl;
        }

        void* operator new(size_t size) {
            cout << "Custom new operator called. Size: " << size << " bytes" << endl;
            void* p = ::operator new(size); // Allocate memory using default operator new
            return p;
        }

        void operator delete(void* p) {
            cout << "Custom delete operator called" << endl;
            ::operator delete(p); // Deallocate memory using default operator delete
        }
};

int main() {
    MyClass* obj = new MyClass();
    delete obj;

    return 0;
}
