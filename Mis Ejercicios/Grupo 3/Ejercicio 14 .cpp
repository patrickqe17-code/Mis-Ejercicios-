#include <iostream>
using namespace std;

int sumaNaturales(int n) {

    if (n == 1)
        return 1;

    return n + sumaNaturales(n - 1);
}

int main() {

    int n;

    cout << "Ingrese un numero: ";
    cin >> n;

    while (n <= 0) {

        cout << "Numero invalido. Intente nuevamente: ";
        cin >> n;
    }

    cout << "Suma = "
         << sumaNaturales(n);

    return 0;
}
