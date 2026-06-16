#include <iostream>
#include <cmath>
using namespace std;

double factorial(int n) {

    double f = 1;

    for(int i = 1; i <= n; i++)
        f *= i;

    return f;
}

int main() {

    int N;
    double p;

    cout << "Ingrese N: ";
    cin >> N;

    cout << "Ingrese p: ";
    cin >> p;

    if(N < 0 || p <= 0 || p > 1) {

        cout << "Datos invalidos";
        return 0;
    }

    double q = 1 - p;

    cout << "\nK\tP(K)\n";

    for(int K = 0; K <= N; K++) {

        double probabilidad =
        factorial(N) /
        (factorial(K) *
         factorial(N-K));

        probabilidad *=
        pow(p,K) *
        pow(q,N-K);

        cout << K
             << "\t"
             << probabilidad
             << endl;
    }

    return 0;
}
