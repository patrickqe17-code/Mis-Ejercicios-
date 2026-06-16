#include <iostream>
using namespace std;

int main() {

    long long numero;
    long long invertido = 0;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    long long auxiliar = numero;

    if(auxiliar < 0)
        auxiliar = -auxiliar;

    while(auxiliar > 0) {

        invertido = invertido * 10 + auxiliar % 10;
        auxiliar = auxiliar / 10;
    }

    if(numero < 0)
        invertido = -invertido;

    cout << "Numero invertido: "
         << invertido;

    return 0;
}
