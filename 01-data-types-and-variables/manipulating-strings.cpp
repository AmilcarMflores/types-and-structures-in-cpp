#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "World!";

    //Concatenation
    string concatenated = str1 + str2;
    cout << "Concatenated string: " << concatenated << endl;

    //Length
    cout << "Length of str1: " << str1.length() << endl;

    //Accessing characters
    char firstChar = str1[0];
    char lastChar = str2.back();
    cout << "First character of str1: " << firstChar << endl;
    cout << "Last character of str2: " << lastChar << endl;

    //Substring
    string substring = concatenated.substr(6, 5);
    cout << "Substring: " << substring << endl;

    //Find
    size_t index = concatenated.find("World");
    if (index != string::npos) {
        cout << "Found 'World' at index: " << index << endl;
    }

    //Replace
    concatenated.replace(6, 5, "Universe");
    cout << "Replaced string: " << concatenated << endl;

    //Comparison
    string str3 = "Hello";
    string str4 = "HELLO";
    if(str1 == str3) {
        cout << "str1 and str3 are equal." << endl;
    }
    if(str1.compare(str4) == 0) {
        cout << "str1 and str4 are equal." << endl;
    }
    return 0;
}