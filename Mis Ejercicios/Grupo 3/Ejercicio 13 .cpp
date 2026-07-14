#include <iostream>
#include <string>
using namespace std;

struct Producto {

    string nombre;
    int cantidad;
};

int main() {

    int n;

    cout << "Cantidad de productos: ";
    cin >> n;

    while (n <= 0 || n > 100) {

        cout << "Cantidad invalida. Intente nuevamente: ";
        cin >> n;
    }

    Producto inventario[100];

    for (int i = 0; i < n; i++) {

        cout << "\nNombre del producto: ";
        cin >> inventario[i].nombre;

        cout << "Cantidad: ";
        cin >> inventario[i].cantidad;

        while (inventario[i].cantidad < 0) {

            cout << "Cantidad invalida. Intente nuevamente: ";
            cin >> inventario[i].cantidad;
        }
    }

    cout << "\n=== INVENTARIO ===\n";

    for (int i = 0; i < n; i++) {

        cout << inventario[i].nombre
             << " -> "
             << inventario[i].cantidad
             << endl;
    }

    return 0;
}
