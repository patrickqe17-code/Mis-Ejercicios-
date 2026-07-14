#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Dimension de las matrices: ";
    cin >> n;

    while (n <= 0 || n > 10) {

        cout << "Dimension invalida: ";
        cin >> n;
    }

    int A[10][10];
    int B[10][10];
    int C[10][10];

    cout << "\nMatriz A:\n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cin >> A[i][j];
        }
    }

    cout << "\nMatriz B:\n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            C[i][j] = 0;

            for (int k = 0; k < n; k++) {

                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nMatriz resultado:\n";

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {

            cout << C[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
