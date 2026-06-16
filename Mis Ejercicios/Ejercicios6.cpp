#include <iostream>
using namespace std;

int main() {

    int d1, m1, a1;
    int d2, m2, a2;

    cout << "Ingrese dia de la primera fecha (0 para terminar): ";
    cin >> d1;

    while(d1 != 0) {

        cout << "Ingrese mes de la primera fecha: ";
        cin >> m1;

        cout << "Ingrese anio de la primera fecha: ";
        cin >> a1;

        cout << "Ingrese dia de la segunda fecha: ";
        cin >> d2;

        cout << "Ingrese mes de la segunda fecha: ";
        cin >> m2;

        cout << "Ingrese anio de la segunda fecha: ";
        cin >> a2;

        if(a1 < a2) {

            cout << "La primera fecha es anterior" << endl;

        } else if(a1 > a2) {

            cout << "La segunda fecha es anterior" << endl;

        } else {

            if(m1 < m2) {

                cout << "La primera fecha es anterior" << endl;

            } else if(m1 > m2) {

                cout << "La segunda fecha es anterior" << endl;

            } else {

                if(d1 < d2) {

                    cout << "La primera fecha es anterior" << endl;

                } else if(d1 > d2) {

                    cout << "La segunda fecha es anterior" << endl;

                } else {

                    cout << "Las fechas son iguales" << endl;
                }
            }
        }

        cout << "\nIngrese dia de la primera fecha (0 para terminar): ";
        cin >> d1;
    }

    return 0;
}
