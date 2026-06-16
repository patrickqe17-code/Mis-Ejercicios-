#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    double suma; 

    cout << "Ingrese el tamano de su vector: ";
    cin >> n;

    vector<double> a(n);
    vector<double> b(n);

    cout << "\nIngrese el numero real que se va a sumar a cada componente: ";
    cin >> suma;
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el valor real para la posicion [" << i << "] : ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        b[i] = a[i] + suma; 
    }

    cout << "\nSu vector original es: ";
    for (double elemento : a) {
        cout << elemento << " ";
    }
    cout << endl;

    cout << "El vector resultante con la suma es: ";
    for (double elementos2 : b) {
        cout << elementos2 << " ";
    }
    cout << endl;

    return 0;
}
