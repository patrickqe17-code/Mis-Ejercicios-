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
    cout << "\n--- Procedimiento y Suma de cada fila ---" << endl;
    for (int i = 0; i < filas; i++) {
        int sumaFila = 0;
        
        cout << "Fila " << i << ": ";

        for (int j = 0; j < columnas; j++) {
            sumaFila += matriz[i][j]; 
            cout << matriz[i][j]; 

            if (j < columnas - 1) {
                cout << " + ";
            } else {
                cout << " = " << sumaFila << endl;
            }
        }
    }
    return 0;
}
