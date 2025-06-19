#include <iostream>
using namespace std;

int main() {
    bool isSunny = true;
    bool isWarm = false;

    // Logical AND (&&) operation
    bool isNiceWeather = isSunny && isWarm;
    cout << "Is it nice weather? " << boolalpha << isNiceWeather << endl;

    // Logical OR (||) operation
    bool isEitherSunnyOrWarm = isSunny || isWarm;
    cout << "Is it either sunny or warm? " << boolalpha << isEitherSunnyOrWarm << endl;

    // Logical NOT (!) operation
    bool isNotSunny = !isSunny;
    cout << "Is it not sunny? " << boolalpha << isNotSunny << endl;

    return 0;
}