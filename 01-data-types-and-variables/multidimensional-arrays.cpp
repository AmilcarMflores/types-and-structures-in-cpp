#include <iostream>
using namespace std;

int main() {
    int arr[3][4]; // 3 filas, 4 columnas

    // Fila 0
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[0][3] = 4;

    // Fila 1
    arr[1][0] = 5;
    arr[1][1] = 6;
    arr[1][2] = 7;
    arr[1][3] = 8;

    // Fila 2
    arr[2][0] = 9;
    arr[2][1] = 10;
    arr[2][2] = 11;
    arr[2][3] = 12;

    // Accessing and printing the elements of the array
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}