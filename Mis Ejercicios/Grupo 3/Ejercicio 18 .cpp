#include <iostream>
#include <fstream>
using namespace std;

int main() {

    ofstream salida("datos.txt");

    int n;

    cout << "Cantidad de numeros: ";
    cin >> n;

    while (n <= 0) {

        cout << "Cantidad invalida. Intente nuevamente: ";
        cin >> n;
    }

    int numero;

    for (int i = 0; i < n; i++) {

        cout << "Numero " << i + 1 << ": ";
        cin >> numero;

        salida << numero << endl;
    }

    salida.close();

    ifstream entrada("datos.txt");

    cout << "\nContenido del archivo:\n";

    while (entrada >> numero) {

        cout << numero << endl;
    }

    entrada.close();

    return 0;
}
