#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Ingrese numero de filas: ";
    cin >> n;

    if(n <= 0) {

        cout << "Numero invalido";
        return 0;
    }

    for(int i = 1; i <= n; i++) {

        int valor = i % 10;

        for(int j = 1; j <= i; j++) {

            cout << valor << " ";

            valor++;

            if(valor > 9)
                valor = 0;
        }

        valor -= 2;

        if(valor < 0)
            valor += 10;

        for(int j = 1; j < i; j++) {

            cout << valor << " ";

            valor--;

            if(valor < 0)
                valor = 9;
        }

        cout << endl;
    }

    return 0;
}
