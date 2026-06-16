#include <iostream>
using namespace std;

int main() {

    const int MAXINTENTOS = 3;

    int intentos = 0;

    int d1, m1, a1;
    int d2, m2, a2;

    while(intentos < MAXINTENTOS) {

        cout << "Ingrese dia de la primera fecha (0 para salir): ";
        cin >> d1;

        if(d1 == 0) {
            break;
        }

        cout << "Ingrese mes y anio de la primera fecha: ";
        cin >> m1 >> a1;

        cout << "Ingrese dia, mes y anio de la segunda fecha: ";
        cin >> d2 >> m2 >> a2;

        if(a1 < a2)
            cout << "La primera fecha es anterior\n";
        else if(a1 > a2)
            cout << "La segunda fecha es anterior\n";
        else if(m1 < m2)
            cout << "La primera fecha es anterior\n";
        else if(m1 > m2)
            cout << "La segunda fecha es anterior\n";
        else if(d1 < d2)
            cout << "La primera fecha es anterior\n";
        else if(d1 > d2)
            cout << "La segunda fecha es anterior\n";
        else
            cout << "Las fechas son iguales\n";

        intentos++;
    }

    if(intentos == MAXINTENTOS) {

        cout << "Lo siento, ha perdido";
    }

    return 0;
}
