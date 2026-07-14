#include <iostream>
#include <string>
using namespace std;

int main() {

    string cadena;

    cout << "Ingrese una palabra: ";
    cin >> cadena;

    int n = cadena.length();

    for (int i = 0; i < n - 1; i++) {

        for (int j = 0; j < n - i - 1; j++) {

            if (cadena[j] > cadena[j + 1]) {

                char aux = cadena[j];
                cadena[j] = cadena[j + 1];
                cadena[j + 1] = aux;
            }
        }
    }

    cout << "Cadena ordenada: "
         << cadena;

    return 0;
}
