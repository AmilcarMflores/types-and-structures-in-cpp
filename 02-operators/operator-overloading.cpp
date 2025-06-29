#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    // Constructor con valores por defecto
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Sobrecarga del operador + como función miembro
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Método para mostrar el número complejo
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(4.0, 5.0);
    
    Complex c3 = c1 + c2; // Uso del operador sobrecargado
    c3.display();         // Salida: 6 + 8i
    
    return 0;
}