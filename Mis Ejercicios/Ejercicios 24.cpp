#include <iostream>
using namespace std;

int main() {

    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if(numero <= 0) {

        cout << "Numero invalido";
        return 0;
    }

    int a = 1;
    int b = 1;
    int c;

    while(b < numero) {

        c = a + b;
        a = b;
        b = c;
    }

    if(b == numero) {

        cout << "Pertenece a Fibonacci\n";

        cout << "Anterior: "
             << a << endl;

        cout << "Numero: "
             << b << endl;

        cout << "Siguiente: "
             << a + b;

    } else {

        cout << "No pertenece a Fibonacci";
    }

    return 0;
}
