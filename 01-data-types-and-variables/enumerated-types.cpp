#include <iostream>
using namespace std;

enum Month {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main() {
    Month currentMonth = January;
    cout << "The current month is: ";

    switch(currentMonth) {
        case January:
            cout << "January";
            break;
        case February:
            cout << "February";
            break;
        case March:
            cout << "March";
            break;
        case April:
            cout << "April";
            break;
        case May:
            cout << "May";
            break;
        case June:
            cout << "June";
            break;
        case July:
            cout << "July";
            break;
        case August:
            cout << "August";
            break;
        case September:
            cout << "September";
            break;
        case October:
            cout << "October";
            break;
        case November:
            cout << "November";
            break;
        case December:
            cout << "December";
            break;
    }
    cout << endl;
    return 0;
}