#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Enter a character: ";
    cin >> character;

    cout << "Character: " << character << endl;
    cout << "ASCII value: " << static_cast<int>(character) << endl;

    return 0;
}