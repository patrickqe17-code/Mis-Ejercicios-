#include <iostream>
#include <string>
using namespace std;

int main() {

    string numero;
    bool gemelo = true;

    cout << "Ingrese numero: ";
    cin >> numero;

    int mitad = numero.length() / 2;

    for(int i = 0; i < mitad; i++) {

        if(numero[i] != numero[i + mitad]) {

            gemelo = false;
        }
    }

    if(gemelo)
        cout << "Numero gemelo";
    else
        cout << "No es gemelo";

    return 0;
}
