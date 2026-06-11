#include <iostream>
using namespace std;

int main() {

    int n1,d1,n2,d2;

    cout << "Ingrese numerador 1: ";
    cin >> n1;

    cout << "Ingrese denominador 1: ";
    cin >> d1;

    cout << "Ingrese numerador 2: ";
    cin >> n2;

    cout << "Ingrese denominador 2: ";
    cin >> d2;

    if(d1 == 0 || d2 == 0) {

        cout << "Denominador invalido";

    } else {

        int sumaNum =
        (n1*d2)+(n2*d1);

        int sumaDen =
        d1*d2;

        int prodNum =
        n1*n2;

        int prodDen =
        d1*d2;

        cout << "Suma: "
             << sumaNum
             << "/"
             << sumaDen
             << endl;

        cout << "Producto: "
             << prodNum
             << "/"
             << prodDen;
    }

    return 0;
}
