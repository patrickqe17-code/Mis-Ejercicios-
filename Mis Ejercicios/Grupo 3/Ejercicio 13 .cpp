#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream entrada("productos.txt");

    if (!entrada) {

        cout << "No se pudo abrir el archivo.";

        return 0;
    }

    ofstream salida("descuento.txt");

    string nombre;
    double precio;

    cout << "Lista de productos\n\n";

    while (entrada >> nombre >> precio) {

        if (precio < 0) {

            cout << "Precio invalido para " << nombre << endl;
            continue;
        }

        double descuento = precio * 0.10;
        double precioFinal = precio - descuento;

        cout << nombre << "  "
             << precio
             << " -> "
             << precioFinal
             << endl;

        salida << nombre << " "
               << precioFinal << endl;
    }

    entrada.close();
    salida.close();

    cout << "\nArchivo descuento.txt generado correctamente.";

    return 0;
}
