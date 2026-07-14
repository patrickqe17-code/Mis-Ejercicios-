#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream entrada("productos.txt");

    if (!entrada) {

        cout << "No se pudo abrir productos.txt";

        return 0;
    }

    ofstream salida("reporte.txt");

    string nombre;
    double precio;
    int cantidad;

    while (entrada >> nombre >> precio >> cantidad) {

        if (precio < 0 || cantidad < 0) {

            cout << "Datos invalidos para " << nombre << endl;
            continue;
        }

        double subtotal = precio * cantidad;
        double descuento = subtotal * 0.10;
        double total = subtotal - descuento;

        salida << nombre << " "
               << subtotal << " "
               << descuento << " "
               << total << endl;
    }

    entrada.close();
    salida.close();

    cout << "Reporte generado correctamente.";

    return 0;
}
