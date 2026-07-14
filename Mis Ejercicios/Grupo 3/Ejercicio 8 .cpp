#include <iostream>
using namespace std;

int main() {

    int n, m;

    cout << "Filas: ";
    cin >> n;

    cout << "Columnas: ";
    cin >> m;

    while (n <= 0 || m <= 0 || n > 20 || m > 20) {

        cout << "Dimensiones invalidas.\n";

        cout << "Filas: ";
        cin >> n;

        cout << "Columnas: ";
        cin >> m;
    }

    int matriz[20][20];

    cout << "\nIngrese los elementos:\n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {

            cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz transpuesta:\n";

    for (int i = 0; i < m; i++) {

        for (int j = 0; j < n; j++) {

            cout << matriz[j][i] << " ";
        }

        cout << endl;
    }

    return 0;
}
