#include <iostream>
using namespace std;

int main() {
    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl; //1 byte(s)

    cout << "Size of short: " << sizeof(short) << " byte(s)" << endl; //2 byte(s)

    cout << "Size of int: " << sizeof(int) << " byte(s)" << endl; //4 byte(s)

    cout << "Size of long: " << sizeof(long) << " byte(s)" << endl; //4 byte(s)

    cout << "Size of long long: " << sizeof(long long) << " byte(s)" << endl; //8 byte(s)

    cout << "Size of float: " << sizeof(float) << " byte(s)" << endl; //4 byte(s)

    cout << "Size of double: " << sizeof(double) << " byte(s)" << endl; //8 byte(s)

    cout << "Size of long double: " << sizeof(long double) << " byte(s)" << endl; //16 byte(s)

    cout << "Size of bool: " << sizeof(bool) << " byte(s)" << endl; //1 byte(s)

    return 0;
}