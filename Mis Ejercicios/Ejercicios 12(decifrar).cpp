#include <iostream>
#using namespace std;

int main() {

    int numero;

    cout << "Ingrese numero cifrado: ";
    cin >> numero;

    if(numero < 1000 || numero > 9999) {

        cout << "Numero invalido";
        return 0;
    }

    int d1 = numero / 1000;
    int d2 = (numero / 100) % 10;
    int d3 = (numero / 10) % 10;
    int d4 = numero % 10;

    int t1 = d3;
    int t2 = d4;
    int t3 = d1;
    int t4 = d2;

    d1 = (t1 + 3) % 10;
    d2 = (t2 + 3) % 10;
    d3 = (t3 + 3) % 10;
    d4 = (t4 + 3) % 10;

    int original =
        d1 * 1000 +
        d2 * 100 +
        d3 * 10 +
        d4;

    cout << "Numero original: "
         << original;

    return 0;
}
