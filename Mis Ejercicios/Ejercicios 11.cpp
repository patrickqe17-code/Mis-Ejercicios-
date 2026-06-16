#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double x, y;

    int contador = 0;

    cout << "Ingrese puntos (999 999 para terminar)\n";

    while(true) {

        cin >> x >> y;

        if(x == 999 && y == 999)
            break;

        double d1 = sqrt(pow(x - 5, 2) + pow(y - 4, 2));
        double d2 = sqrt(pow(x + 5, 2) + pow(y - 4, 2));

        if(d1 <= 2 && d2 <= 3)
            contador++;
    }

    cout << "Puntos dentro de ambas circunferencias: "
         << contador;

    return 0;
}
