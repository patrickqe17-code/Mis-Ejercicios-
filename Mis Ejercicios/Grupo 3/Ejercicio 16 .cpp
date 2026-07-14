#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Cantidad de elementos: ";
    cin >> n;

    while (n <= 0 || n > 100) {

        cout << "Cantidad invalida. Intente nuevamente: ";
        cin >> n;
    }

    int vector[100];

    cout << "\nIngrese los elementos ordenados:\n";

    for (int i = 0; i < n; i++) {

        cin >> vector[i];
    }

    int buscar;

    cout << "\nNumero a buscar: ";
    cin >> buscar;

    int izquierda = 0;
    int derecha = n - 1;
    bool encontrado = false;

    while (izquierda <= derecha && !encontrado) {

        int medio = (izquierda + derecha) / 2;

        if (vector[medio] == buscar) {

            encontrado = true;

        } else if (buscar < vector[medio]) {

            derecha = medio - 1;

        } else {

            izquierda = medio + 1;
        }
    }

    if (encontrado)
        cout << "\nElemento encontrado.";
    else
        cout << "\nElemento no encontrado.";

    return 0;
}
