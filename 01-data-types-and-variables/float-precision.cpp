#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float floatNumber = 1.123456789;
    double doubleNumber = 1.123456789;

    // Establece la precisión de la salida en 10 lugares decimales antes de imprimir los valores
    cout << fixed << setprecision(10);
    
    cout << "Float number: " << floatNumber << endl;
    cout << "Double number: " << doubleNumber << endl;

    return 0;
}