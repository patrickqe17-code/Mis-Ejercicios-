#include <iostream>

using namespace std;

int invertir(int numero){

    int invertido=0;

    while(numero>0){

        int digito=numero%10;

        invertido=invertido*10+digito;

        numero/=10;

    }

    return invertido;

}

int main(){

    int numero;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while(numero<0){

        cout<<"Numero invalido. Ingrese nuevamente: ";
        cin>>numero;

    }

    cout<<"\nNumero invertido: "<<invertir(numero);

    return 0;

}
