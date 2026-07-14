#include <iostream>

using namespace std;

int MCD(int a, int b){

    while(b != 0){

        int residuo = a % b;

        a = b;
        b = residuo;

    }

    return a;

}

int main(){

    int numero1, numero2;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    while(numero1 <= 0 || numero2 <= 0){

        cout << "Los numeros deben ser positivos.\n";

        cout << "Primer numero: ";
        cin >> numero1;

        cout << "Segundo numero: ";
        cin >> numero2;

    }

    cout << "\nEl MCD es: " << MCD(numero1, numero2);

    return 0;

}
