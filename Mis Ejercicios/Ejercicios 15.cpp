#include <iostream>
using namespace std;

int main() {

    double a, b, c, d;

    cout << "Ingrese intervalo [a,b]: ";
    cin >> a >> b;

    cout << "Ingrese intervalo [c,d]: ";
    cin >> c >> d;

    if(a > b || c > d) {

        cout << "Intervalo invalido";
        return 0;
    }

    double inicio;
    double fin;

    if(a > c)
        inicio = a;
    else
        inicio = c;

    if(b < d)
        fin = b;
    else
        fin = d;

    if(inicio <= fin) {

        cout << "Interseccion: ["
             << inicio
             << ", "
             << fin
             << "]";

    } else {

        cout << "No existe interseccion";
    }

    return 0;
}
