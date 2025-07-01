#include <iostream>
using namespace std;

class MyClass {
    private: 
        int* data; // Puntero a un entero dinámicamente asignado

    public:
        //Constructor
        MyClass(int value) {
            data = new int; // Asignación de memoria dinámica
            *data = value; // Almacenamiento del valor
        }

        //Copy constructor
        MyClass(const MyClass& other) {
            data = new int; // Asignación de nueva memoria
            *data = *other.data; // Copia del valor del objeto original
        }

        //Assignment operator overloading
        MyClass& operator=(const MyClass& other) {
            if(this == &other) // Verificación de auto-asignación
                return *this;
            
            delete data; // Liberar la memoria previamente asignada
            data = new int; // Asignar nueva memoria
            *data = *other.data; // Copiar el valor
            return *this;
        }

        //Destructor
        ~MyClass() {
            delete data; // Liberar la memoria al destruir el objeto
        }

        //Getter
        int getData() const{
            return *data; // Retorna el valor almacenado
        }
};

int main() {
    MyClass obj1(10); // Crea un objeto con valor 10
    MyClass obj2(20); // Crea otro objeto con valor 20

    obj2 = obj1; // Se llama al operador de asignación
    cout << "obj1: " << obj1.getData() << endl; // Imprime el valor de obj1
    cout << "obj2: " << obj2.getData() << endl; // Imprime el valor de obj2

    return 0;
}
