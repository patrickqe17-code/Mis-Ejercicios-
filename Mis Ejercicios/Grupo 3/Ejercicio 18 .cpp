#include <iostream>

using namespace std;

int main() {

    int filas, columnas;

    cout << "Numero de filas: ";
    cin >> filas;

    cout << "Numero de columnas: ";
    cin >> columnas;

    while (filas <= 0 || columnas <= 0) {

        cout << "Dimensiones invalidas.\n";

        cout << "Filas: ";
        cin >> filas;

        cout << "Columnas: ";
        cin >> columnas;
    }

    int **matriz = new int*[filas];

    for (int i = 0; i < filas; i++) {

        matriz[i] = new int[columnas];
    }

    cout << "\nIngrese los elementos:\n";

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {

            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz ingresada:\n";

    for (int i = 0; i < filas; i++) {

        for (int j = 0; j < columnas; j++) {

            cout << matriz[i][j] << " ";
        }

        cout << endl;
    }

    for (int i = 0; i < filas; i++) {

        delete[] matriz[i];
    }

    delete[] matriz;

    return 0;
}
