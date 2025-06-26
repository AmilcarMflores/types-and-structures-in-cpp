#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10, z = 15;

    int result = (x += 2, y += 3, z+= 4); //Comma operator used here

    cout << "x: " << x << endl; //7
    cout << "y: " << y << endl; //13
    cout << "z: " << z << endl; //19
    cout << "result: " << result << endl;   //19

    return 0;
}