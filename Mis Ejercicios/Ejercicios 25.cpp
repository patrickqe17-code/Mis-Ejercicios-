#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int n;

    cout << "Cantidad de numeros: ";
    cin >> n;

    if(n <= 0) {

        cout << "Cantidad invalida";
        return 0;
    }

    double sumaInversos = 0;
    double producto = 1;

    for(int i = 1; i <= n; i++) {

        double numero;

        cout << "Numero " << i << ": ";
        cin >> numero;

        if(numero <= 0) {

            cout << "Todos deben ser positivos";
            return 0;
        }

        sumaInversos += 1.0 / numero;
        producto *= numero;
    }

    double armonica =
    n / sumaInversos;

    double geometrica =
    pow(producto,1.0/n);

    cout << "Media armonica = "
         << armonica << endl;

    cout << "Media geometrica = "
         << geometrica << endl;

    cout << "Diferencia = "
         << armonica - geometrica;

    return 0;
}
