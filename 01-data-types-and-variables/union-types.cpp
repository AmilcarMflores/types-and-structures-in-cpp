#include <iostream>
using namespace std;

union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    MyUnion myUnion;

    myUnion.intValue = 42;
    cout << "Value as integer: " << myUnion.intValue << endl;

    myUnion.floatValue = 3.14;
    cout << "Value as float: " << myUnion.floatValue << endl;

    myUnion.charValue = 'A';
    cout << "Value as char: " << myUnion.charValue << endl;

    return 0;
}