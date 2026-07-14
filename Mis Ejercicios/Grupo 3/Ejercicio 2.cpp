#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Cantidad de notas: ";
    cin >> n;
    while (n <= 0) {
        cout << "Cantidad invalida: ";
        cin >> n;
    }
    double notas[100];
    double suma = 0;
    for (int i = 0; i < n; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> notas[i];

        while (notas[i] < 0 || notas[i] > 20) {
            cout << "Nota invalida. Ingrese nuevamente: ";
            cin >> notas[i];
        }
        suma += notas[i];
    }
    double promedio = suma / n;
    cout << "Promedio = " << promedio;
    return 0;
}
