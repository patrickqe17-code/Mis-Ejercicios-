#include <iostream>
using namespace std;

int main() {

    int primero;
    int segundo;

    cout << "Ingrese primer numero: ";
    cin >> primero;

    cout << "Ingrese segundo numero: ";
    cin >> segundo;

    if(primero <= 0 || segundo <= 0) {

        cout << "Numeros invalidos";

    } else {

        while(primero != segundo) {

            if(primero > segundo) {

                primero = primero - segundo;

            } else {

                segundo = segundo - primero;
            }
        }

        cout << "Resultado: "
             << primero;
    }

    return 0;
}
