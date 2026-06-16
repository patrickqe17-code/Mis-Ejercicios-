#include <iostream>
using namespace std;

int main() {

    long long numero;
    int digitos = 0;

    cout << "Ingrese un numero positivo: ";
    cin >> numero;

    if(numero <= 0) {

        cout << "Numero invalido";

    } else {

        while(numero > 0) {

            digitos++;
            numero = numero / 10;
        }

        cout << "Cantidad de digitos: "
             << digitos;
    }

    return 0;
}
