#include <iostream>
using namespace std;

int main() {
    int num = 5;

    //Prefix increment
    int result1 = ++num;
    cout << "Prefix increment: " << result1 << endl; //6

    //Postfix increment
    int result2 = num++;
    cout << "Postfix increment: " << result2 << endl; //6 (num is now 7)

    //Prefix decrement
    int result3 = --num;
    cout << "Prefix decrement: " << result3 << endl; //6 (num is now 6)

    //Postfix decrement
    int result4 = num--;
    cout << "Postfix decrement: " << result4 << endl; //6 (num is now 5)

    return 0;
}