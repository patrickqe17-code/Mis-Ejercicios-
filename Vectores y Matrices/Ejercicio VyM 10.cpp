#include <iostream>
using namespace std;

int main() {
    int filas, columnas;

    cout << "Introduce el numero de filas (m): ";
    cin >> filas;
    cout << "Introduce el numero de columnas (n): ";
    cin >> columnas;

    int matriz[filas][columnas];

    cout << "\n--- Introduce los elementos de la matriz ---" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\n--- Procedimiento y Suma de cada columna ---" << endl;
    for (int j = 0; j < columnas; j++) {
        int sumaColumna = 0;
        
        cout << "Columna " << j << ": ";

        for(int i = 0; i < filas; i++) {
            sumaColumna += matriz[i][j]; 
             cout << matriz[i][j];
            if (i < filas - 1) {
                cout << " + ";
            } else {
                cout << " = " << sumaColumna << endl;
            }
        }
    }

    return 0;
}
