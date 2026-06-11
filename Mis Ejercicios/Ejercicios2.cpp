#include <iostream>
using namespace std;

int main() {

    double base, resultado = 1;
    int numerador, denominador;

    cout << "Ingrese base: ";
    cin >> base;

    cout << "Ingrese numerador: ";
    cin >> numerador;

    cout << "Ingrese denominador: ";
    cin >> denominador;

    if(denominador == 0) {

        cout << "Denominador invalido";

    } else {

        for(int i = 1; i <= numerador; i++) {

            resultado = resultado * base;
        }

        cout << "Resultado aproximado: " << resultado << endl;
        cout << "Exponente usado: "
             << numerador << "/" << denominador;
    }

    return 0;
}
