#include <iostream>
#include <string>
using namespace std;

int main() {

    int numero;

    cout << "Ingrese numero decimal: ";
    cin >> numero;

    if(numero < 0) {

        cout << "Numero invalido";

    } else if(numero == 0) {

        cout << "Binario: 0";

    } else {

        string binario = "";

        while(numero > 0) {

            binario =
            char((numero % 2) + '0')
            + binario;

            numero = numero / 2;
        }

        cout << "Binario: "
             << binario;
    }

    return 0;
}
