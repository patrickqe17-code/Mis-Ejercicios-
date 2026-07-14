#include <iostream>
using namespace std;

void quickSort(int v[], int izquierda, int derecha) {

    int i = izquierda;
    int j = derecha;

    int pivote = v[(izquierda + derecha) / 2];

    while (i <= j) {

        while (v[i] < pivote)
            i++;

        while (v[j] > pivote)
            j--;

        if (i <= j) {

            int aux = v[i];
            v[i] = v[j];
            v[j] = aux;

            i++;
            j--;
        }
    }

    if (izquierda < j)
        quickSort(v, izquierda, j);

    if (i < derecha)
        quickSort(v, i, derecha);
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

    quickSort(v, 0, n - 1);

    cout << "\nVector ordenado:\n";

    for (int i = 0; i < n; i++) {

        cout << v[i] << " ";
    }

    return 0;
}
