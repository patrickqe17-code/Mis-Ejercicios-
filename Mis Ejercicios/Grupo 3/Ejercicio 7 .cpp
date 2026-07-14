#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    while (n <= 0 || n > 100) {

        cout << "Cantidad invalida. Intente nuevamente: ";
        cin >> n;
    }

    int vector[100];

    for (int i = 0; i < n; i++) {

        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

    for (int i = 1; i < n; i++) {

        int clave = vector[i];
        int j = i - 1;

        while (j >= 0 && vector[j] > clave) {

            vector[j + 1] = vector[j];
            j--;
        }

        vector[j + 1] = clave;
    }

    cout << "\nVector ordenado:\n";

    for (int i = 0; i < n; i++) {

        cout << vector[i] << " ";
    }

    return 0;
}
