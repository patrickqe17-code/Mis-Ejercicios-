#include <iostream>
#include <cmath>
using namespace std;

double factorial(int n) {

    double f = 1;

    for(int i = 1; i <= n; i++)
        f *= i;

    return f;
}

double seno(double x, int n) {

    double suma = 0;

    for(int i = 0; i < n; i++) {

        double termino =
        pow(-1,i) *
        pow(x,2*i+1) /
        factorial(2*i+1);

        suma += termino;
    }

    return suma;
}

int main() {

    const double PI =
    3.14159265358979323846;

    cout << "Angulo\tTangente\n";

    for(double x = 0;
        x <= 2*PI + 0.0001;
        x += PI/8) {

        double sen = seno(x,10);

        double coseno =
        sqrt(fabs(1 - sen*sen));

        cout << x << "\t";

        if(fabs(coseno) < 0.00001) {

            cout << "infinito";

        } else {

            cout << sen/coseno;
        }

        cout << endl;
    }

    return 0;
}
