#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    ifstream archivo("estudiantes.txt");

    if (!archivo) {

        cout << "Error al abrir el archivo.";

        return 0;
    }

    string nombre;
    double nota;

    double suma = 0;
    int contador = 0;

    while (archivo >> nombre >> nota) {

        if (nota >= 0 && nota <= 20) {

            suma += nota;
            contador++;
        }
    }

    archivo.close();

    if (contador == 0) {

        cout << "Archivo vacio o sin datos validos.";

    } else {

        double promedio = suma / contador;

        cout << "Promedio general = "
             << promedio;
    }

    return 0;
}
