#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Cantidad de elementos: ";
    cin >> n;

    while (n <= 0 || n > 1000) {

        cout << "Cantidad invalida. Intente nuevamente: ";
        cin >> n;
    }

    int *vector = new int[n];

    for (int i = 0; i < n; i++) {

        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

    cout << "\nVector almacenado:\n";

    for (int i = 0; i < n; i++) {

        cout << vector[i] << " ";
    }

    delete[] vector;

    return 0;
}
