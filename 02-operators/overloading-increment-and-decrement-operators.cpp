#include <iostream>
using namespace std;

class Counter {
    private:
        int count;

    public:
        Counter(): count(0) {}

        //Prefix increment operator
        Counter& operator++(){
            count++;
            return *this;
        }

        //Postfix increment operator
        Counter operator++(int) {
            Counter temp = *this;
            count++;
            return temp;
        }

        //Prefix decrement operator
        Counter& operator--() {
            count--;
            return *this;
        }

        //Postfix decrement operator
        Counter operator--(int) {
            Counter temp = *this;
            count--;
            return temp;
        }

        int getCount() const{
            return count;
        }
};

int main() {
    Counter c;
    cout << "Initial count: " << c.getCount() << endl;

    ++c; //Prefix increment
    cout << "After prefix increment: " << c.getCount() << endl;

    c++; //Postfix increment
    cout << "After postfix increment: " << c.getCount() << endl;

    --c; //Prefix decrement
    cout << "After prefix decrement: " << c.getCount() << endl;

    c--; //Postfix decrement
    cout << "After postfix decrement: " << c.getCount() << endl;

    return 0;
}