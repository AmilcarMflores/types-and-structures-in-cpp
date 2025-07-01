#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        string name;
        int age;
    
    public:
        Person() : name(""), age(0) {} //Constructor por defecto

        Person(const string& name, int age) : name(name), age(age) {}

        //Overloading the stream insertion operator (<<)
        friend ostream& operator<<(ostream& os, const Person& person) {
            os << "Name: " << person.name << ", Age: " << person.age;
            return os;
        }

        //Overloading the stream extraction operator (>>)
        friend istream& operator>>(istream& is, Person& person){
            cout << "Enter name: ";
            is >> person.name;
            cout << "Enter age: ";
            is >> person.age;
            return is;
        }
};

int main() {
    Person p1("John Doe", 25);

    //Outputting the Person object using the overloaded << operator
    cout << p1 << endl;

    Person p2;

    //Inputting values for the Person object using the overloaded >> operator
    cin >> p2;

    //Outputting the updated Person object using the overloaded << operator
    cout << p2 << endl;

    return 0;
}
