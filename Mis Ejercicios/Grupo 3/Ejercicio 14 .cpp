#include <iostream>

using namespace std;

void ordenar(int v[], int n) {

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (v[j] > v[j + 1]) {

                int aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

void imprimir(int v[], int n) {

    cout << "\nVector ordenado:\n";

    for (int i = 0; i < n; i++) {

        cout << v[i] << " ";
    }
}

int main() {

    int n;

    cout << "Cantidad de elementos: ";
    cin >> n;

    while (n <= 0 || n > 100) {

        cout << "Cantidad invalida. Intente nuevamente: ";
        cin >> n;
    }

    int v[100];

    for (int i = 0; i < n; i++) {

        cout << "Elemento " << i + 1 << ": ";
        cin >> v[i];
    }

    ordenar(v, n);

    imprimir(v, n);

    return 0;
}
