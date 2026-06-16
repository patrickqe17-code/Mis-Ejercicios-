#include <iostream>
#include <vector>
using namespace std;

int main() {
    int suma = 0; 
    int n;
    
    cout << "Ingresa el tamaño 'n' de los vectores: ";
    cin >> n;

    vector<int> V(n);
    vector<int> W(n);

    cout << "\nIngrese los datos para el Vector V" << endl;
    for (int i = 0; i < n; i++) {
        cout << "V[" << i << "]: ";
        cin >> V[i];
    }

    cout << "\nIngreso de datos para el Vector W" << endl;
    for (int i = 0; i < n; i++) {
        cout << "W[" << i << "]: ";
        cin >> W[i];
    }

    for (int i = 0; i < n; i++) {
        suma += V[i] * W[i]; 
    }

    cout << "El producto escalar de V y W es: " << suma << endl;

    }
