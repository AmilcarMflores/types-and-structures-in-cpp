#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //Logical AND operator (&&)
    if(num > 0 && num <= 100) {
        cout << "The number is between 1 and 100." << endl;
    }

    //Logical OR operator (||)
    if(num < 0 || num > 100) {
        cout << "The number is less than 0 or greater than 100." << endl;
    }

    //Logical NOT operator (!)
    bool isPositive = (num > 0);
    if(!isPositive) {
        cout << "The number is not positive." << endl;
    }
    return 0;
}