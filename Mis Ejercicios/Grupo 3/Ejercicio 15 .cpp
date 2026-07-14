#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Dimension de la matriz: ";
    cin >> n;

    while (n <= 0 || n > 20) {

        cout << "Dimension invalida. Intente nuevamente: ";
        cin >> n;
    }

    int matriz[20][20];

    cout << "\nIngrese la matriz:\n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cin >> matriz[i][j];
        }
    }

    bool simetrica = true;

    for (int i = 0; i < n && simetrica; i++) {

        for (int j = 0; j < n; j++) {

            if (matriz[i][j] != matriz[j][i]) {

                simetrica = false;
                break;
            }
        }
    }

    if (simetrica)
        cout << "\nLa matriz es simetrica.";
    else
        cout << "\nLa matriz NO es simetrica.";

    return 0;
}
