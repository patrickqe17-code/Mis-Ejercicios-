#include <iostream>
using namespace std;

int main() {

    int n;
    long long factorial = 1;

    cout << "Introduzca un entero positivo: ";
    cin >> n;

    if(n < 0) {

        cout << "Numero invalido";

    } else {

        for(int i = 1; i <= n; i++) {

            factorial = factorial * i;
        }

        cout << "El factorial de "
             << n
             << " es: "
             << factorial;
    }

    return 0;
}
