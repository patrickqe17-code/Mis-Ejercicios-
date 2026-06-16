#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int cantidad;
    int suma=0;
    double cuadrado;
    
    cout<<"Cuantos numeros vas a querer en tu vector?"<<endl;
    cin>>cantidad;
    
    vector <int> a(cantidad);
    cout<<endl;
    
    for(int i=0;i<cantidad;i++){
    cout<<"Ingrese el numero para la posición ["<< i <<"]: ";
    cin>>a[i];
    suma+=a[i];
    }
    cout<<endl;
    
    cout<<"Su vector es: "<<endl;
    for(int elementos: a){
        cout<<elementos<<" "<<endl;
    }
    cout<<endl;
    
    cout<<"La suma al cuadrado de los elementos del vector, es: "<<endl;
    cuadrado= sqrt(suma); 
    cout<<cuadrado;
    
    return 0;
}
