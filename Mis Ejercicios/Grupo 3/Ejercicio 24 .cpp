#include <iostream>

using namespace std;

int puntosCalidad(float promedio){

    if(promedio >= 90 && promedio <= 100)
        return 4;

    else if(promedio >= 80)
        return 3;

    else if(promedio >= 70)
        return 2;

    else if(promedio >= 60)
        return 1;

    else
        return 0;

}

int main(){

    float promedio;

    cout << "Ingrese el promedio del estudiante: ";
    cin >> promedio;

    while(promedio < 0 || promedio > 100){

        cout << "Promedio invalido. Intente nuevamente: ";
        cin >> promedio;

    }

    cout << "\nPuntos de calidad: "
         << puntosCalidad(promedio);

    return 0;

}
