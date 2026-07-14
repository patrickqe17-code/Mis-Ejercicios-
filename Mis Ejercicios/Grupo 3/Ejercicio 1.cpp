#include <iostream>
using namespace std;
int main() {
   int n;

    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    while (n <= 0) {
        cout << "Cantidad invalida. Ingrese nuevamente: ";
        cin >> n;
    }

    int vector[100];
    int suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
        suma += vector[i];
    }

    cout << "La suma total es: " << suma;
    return 0;
}
