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

    int mayor = vector[0];
    int menor = vector[0];

    for (int i = 1; i < n; i++) {

        if (vector[i] > mayor)
            mayor = vector[i];

        if (vector[i] < menor)
            menor = vector[i];
    }

    cout << "Mayor = " << mayor << endl;
    cout << "Menor = " << menor << endl;

    return 0;
}
