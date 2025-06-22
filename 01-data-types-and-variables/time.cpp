#include <iostream>
#include <ctime>
using namespace std;

int main() {
    //Get current time
    time_t currenTime = time(nullptr);

    //Convert the time to a string representation
    char* formattedTime = ctime(&currenTime);

    //Print the time and date
    cout << "Current time: " << formattedTime;

    return 0;
}