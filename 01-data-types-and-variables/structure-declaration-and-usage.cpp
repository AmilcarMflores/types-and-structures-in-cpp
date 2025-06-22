#include <iostream>
using namespace std;

//Declare the structure
struct Person {
    string name;
    int age;
};

int main() {
    //Create an instance of the structure
    Person person1;

    //Assing values to the structure members
    person1.name = "John Doe";
    person1.age = 25;

    //Display the values
    cout << "Name: " << person1.name << endl;
    cout << "Age: " <<person1.age << endl;

    return 0;
}