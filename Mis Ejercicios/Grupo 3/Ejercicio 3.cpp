#include <iostream>
using namespace std;
int main() {
    int n;

    cout << "Ingrese el tamanio de la matriz: ";
    cin >> n;

    while (n <= 0 || n > 50) {
        cout << "Valor invalido. Ingrese nuevamente: ";
        cin >> n;
    }

    int matriz[50][50];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == j)
                matriz[i][j] = 1;
            else
                matriz[i][j] = 0;
        }
    }

    cout << "\nMatriz identidad:\n";
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
