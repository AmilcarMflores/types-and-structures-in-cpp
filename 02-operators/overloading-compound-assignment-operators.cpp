#include <iostream>
using namespace std;

class CustomNumber {
    private:
        int value;
    public:
        CustomNumber(int val = 0) : value(val) {}

        //Overloading the += operator
        CustomNumber& operator+=(const CustomNumber& other) {
            value += other.value;
            return *this;
        }

        //Overloading the -= operator
        CustomNumber& operator-=(const CustomNumber& other) {
            value -= other.value;
            return *this;
        }

        //Overloading the *= operator
        CustomNumber& operator*=(const CustomNumber& other) {
            value *= other.value;
            return *this;
        }

        //Overloading the /= operator
        CustomNumber& operator/=(const CustomNumber& other) {
            if(other.value != 0)
                value /= other.value;
            return *this;
        }

        int getValue() const{
            return value;
        }
};

int main() {
    CustomNumber num1(10);
    CustomNumber num2(5);

    num1 += num2;
    cout << "num1 += num2: " << num1.getValue() << endl;

    num1 -= num2;
    cout << "num1 -= num2: " << num1.getValue() << endl;

    num1 *= num2;
    cout << "num1 *= num2: " << num1.getValue() << endl;

    num1 /= num2;
    cout << "num1 /= num2: " << num1.getValue() << endl;

    return 0;
}